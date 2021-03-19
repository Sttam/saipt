/***********************************************************************************************
  Author     : Matts Date : 20th July 2020

  Purpose    :  enum classes

  Source     : Text
***********************************************************************************************/
#include <iostream>
using namespace std;

enum  { mycolor, myblack, pitch_black };  //unamed unscopped enum
enum color1:char { red = 1, yellow=78, green, black };
enum color2:char { grad_red, grad_yellow, grad_green, grad_black };
enum color4:char { mycolor1};

//enum color1:char { red = 1, yellow=278, green, black };
//error: enumerator value ‘278’ is outside the range of underlying type ‘char’
//enum color2:char { red, yellow, green, black };


int main(int argc, char* argv[])
{
    color1 c1_1{112}; 
    color1 c1_2{20}; 
    color1 c1_3{yellow}; 
    color1 c1_4{'C'}; 

    int xyz = mycolor;

    char x = char(yellow);  //Casting works
    cout << "color  yellow  "  << int(x) << endl;

    x = char(grad_yellow);  
    cout << "color  yellow  "  << int(x) << endl;
    return 0;          

    return 0;          
}
