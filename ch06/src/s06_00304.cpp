
/*

   Date           : 2020/06/07
   Author         : Matts

   Purpose        : Declaration Vs Definition

   Instructions   :

   Quiz yourself  : 
                    1) why two characters strings are concatnated by the compiler?
                    2) Learn how compilers treat string literals
                    2) If it is not treated together how could we address it
*/

#include <iostream>

using namespace std;
int main()
{
 
    string s1{"Hello How are you  dfdfdfh diiddddddddddddddddddddddddddddddddddddd"};
    string s2{"H"};

    char c[]{"xxxxxxxxxxxxxxxxxxxx"};

    string s3 = "Will this work and                     kjdkjfdkjf " 
                 "Print me together" " Added a new string "
                 "Print me together" " Added a new string "; 
    //string s2 = "Will this work and ";

               /* Change the size of the s2 by extending the string
                  is there any change?

                  If so how did it come?
                  If not explain the process
              */
/*
    string s3 = "Will this work with a line break " 
              "Print me together"; 
*/

    size_t size_s2 = sizeof( s2 );
    size_t size_s1 = sizeof( s1 );
    size_t size_s3 = sizeof( s3 );
    size_t size_c = sizeof( c );

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    cout << "size of size_2  " << size_s1  << endl;
    cout << "size of size_1  " << size_s2  << endl;
    cout << "size of size_3  " << size_s3  << endl;
    cout << "size of C  " << size_c  << endl;

}
