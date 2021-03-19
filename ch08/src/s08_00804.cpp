/***********************************************************************************************
  Author     : Matts Date : 20th July 2020

  Purpose    :  Unions how a class should be designed to avoid the side 
                effects of constructors.

  Source     : Text
***********************************************************************************************/
#include <iostream>
using namespace std;

class Bad_entry{};

class Entry2 { 

    private:
        enum class Tag { number, text };
        Tag type; // discriminant
        union { // representation
            int i;
            string s; // string has default constructor, copy operations, and destructor
        };

    public:
        struct Bad_entry { }; // used for exceptions
        string name;
        Entry2(){};
        ~Entry2();
        Entry2& operator=(const Entry2&); // necessary because of the string variant
        Entry2(const Entry2&);

         // ...

        int number() const;
        string text() const;
        void set_number(int n);
        void set_text(const string&);
        // ...
};

/*
These access functions check the type tag, and if it is the one that correctly corresponds to the
access we want, it returns a reference to the value; otherwise, it throws an exception. Such a union
is often called a tagged union or a discriminated union.
*/

int Entry2::number() const
{
     if (type!=Tag::number) throw Bad_entry{};
     return i;
};
string Entry2::text() const
{
     if (type!=Tag::text) throw Bad_entry{};
     return s;
};

/*
The write-access functions basically do the same checking of the type tag, but note how setting
a new value must take the previous value into account:
*/

void Entry2::set_number(int n){
    if (type==Tag::text) {
        s.~string(); // explicitly destroy string 
        type = Tag::number;
    }
    i = n;
}


void Entry2::set_text(const string& ss){
    if (type==Tag::text)
        s = ss;
    else {
        new(&s) string{ss}; // placement new: explicitly construct string 
        type = Tag::text;
    }
}
/*
The use of a union forces us to use otherwise obscure and low-level language facilities (explicit
construction and destruction) to manage the lifetime of the union elements. This is another reason
to be wary of using unions.

Note that the union in the declaration of Entry2 is not named. That makes it an anonymous
union. An anonymous union is an object, not a type, and its members can be accessed without
mentioning an object name. That means that we can use members of an anonymous union exactly
as we use other members of a class – as long as we remember that union members really can be
used only one at a time.

*/
/*

Entry2::operator=(). Assignment combines the complexities of reading and writing but is otherwise
logically similar to the access functions:

*/
Entry2& Entry2::operator=(const Entry2& e) // necessary because of the string variant
{
    if (type==Tag::text && e.type==Tag::text) {
        s = e.s; // usual string assignment
        return *this;
    }

    if (type==Tag::text) s.~string(); // explicit destroy 
        switch (e.type) {
            case Tag::number:
                i = e.i;
                break;

            case Tag::text:
               new(&s)(std::string); // placement new: explicit construct 
               s = e.s;
               type = e.type;
        }
        return *this;
}

Entry2::~Entry2()
{
    if (type==Tag::text) s.~string(); // explicit destroy (§11.2.4)
}


int main(int argc, char* argv[])
{
    Entry2 E2;
    string ss{"Setting the string"};
    E2.set_text( ss );
    return 0;   
}
