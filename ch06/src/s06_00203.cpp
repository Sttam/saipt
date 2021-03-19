/*

   Date           : 2020/06/08
   Author         : Matts

   Purpose        : Boolean Values.
                    While writing codes for devices, bring in some creatvity

   Instructions   :

   Quiz yourself  : Why 

*/

#include <iostream>

using namespace std;

int main(){

    int score{0};

    while( !(++score > 100) ); 
    cout << "Holy crap I Got out on " << score << " !" << endl;

    return EXIT_SUCCESS;
}
