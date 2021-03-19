/***********************************************************************************************
  Author     : Matts Date : 20th July 2020

  Purpose    :  enum classes

  Source     : Text
***********************************************************************************************/
#include <iostream>
using namespace std;

enum class color:char { red = 1, yellow, green, black };
enum class grad_color:char { red = 100, yellow, green, black };


int main(int argc, char* argv[])
{
    color c1{1}; 
    color c2{20}; 
    color c3{color::yellow}; 
    color c4{'C'}; 
    //int y = color::yellow; //Error
    int y = int(color::yellow); //Error
    char x = char(color::yellow);  //Casting works
    cout << "color  yellow  "  << int(x) << endl;

    x = char(grad_color::yellow);  //Casting works
    cout << "color  yellow  "  << int(x) << endl;
    return 0;          
}
