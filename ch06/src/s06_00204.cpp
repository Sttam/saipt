/*

   Date           : 2020/06/08
   Author         : Matts

   Purpose        : Boolean Values.
                    While writing codes for devices, bring in some creatvity
                    refined one. Taken out magic numbers
                    There could be more improvements

   Instructions   :

   Quiz yourself  : Why 

*/

#include <iostream>

using namespace std;

constexpr int century{100};

int main(){

    int score{0};

    while( !(++score > century) );

    cout << "Holy crap I Got out on " << score << " !" << endl;
    return EXIT_SUCCESS;
}
