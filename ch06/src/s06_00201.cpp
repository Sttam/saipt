/*-----------------------------------------------------------------------

   Date           : 2020/06/08
   Author         : Matts

   Purpose        :  Boolean Values.
                     The example show how not to name the variables

   Instructions   :

   Quiz yourself  : Why 

---------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

int main(){


    int score = 0;
    auto out_or_in = false;   //What is wrong here

    while(!out_or_in){
        score++;
        if( score > 100 )
            out_or_in = true; 
    }
    cout << "Holy crap I Got out on " << score << " !" << endl;
    return EXIT_SUCCESS;
}
