/*--------------------------------------------------------------------------
        Date : 04 August  2020
     Session : 09 -  Statements  
     Purpose : switch Statements

     Details :

-------------------------------------------------------------------------- */
#include <iostream>
using namespace std;

#define break      { g( __LINE__); break; }

void f( int x );
void g( int x );
int main(){
    int val{3};
        switch (val) {
            case 1:
                f( __LINE__ );
                break;

            case 2:
                f( __LINE__ );
                break;

            case 3:
                f( __LINE__ );

            case 4:
                f( __LINE__ );

            default:
                f( __LINE__ );
            break;
    }
    return EXIT_SUCCESS;
}
void f( int x ){
    cout << "Processing from Line " << x << endl;
}
void g( int x ){
    cout << "       ------>Exiting case Line " << x << endl;
}
