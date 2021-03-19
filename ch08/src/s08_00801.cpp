/***********************************************************************************************
  Author     : Matts Date : 20th July 2020

  Purpose    :  Unions

  Source     : Text
***********************************************************************************************/
#include <iostream>
using namespace std;

enum Type { str, num };

struct Entry {
     char* name;
     Type t;
     char* s; // use s if t==str
     int i;   // use i if t==num
};

void f(Entry* p)
{
    /* The members s and i can never be used at the same time, 
     so space is wasted. It can be easily recovered
     by specifying that both should be members of a union */
    if( p->t == str)
       cout << p->s;
     // ...
}

union Value {
     char* s;
     int i;
};

struct Entry2 {
     char* name;
     //Type t;
     Value s; 
};

int main(int argc, char* argv[])
{
    Entry2 e;

}
