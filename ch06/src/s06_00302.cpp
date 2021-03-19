/*

   Date           : 2020/05/27
   Author         : Matts

   Purpose        : show character literals
                    Sample program to show the power of standard library 

   Instructions   :
           Room for improvements. Can somebody pick it up  and make it perfect :)

   Quiz yourself  : 

*/

#include <iostream>
#include <map>
using namespace std;
int main()
{

  map<int, string> cmaps{
     { 01 , "Nonprintable "}, 
     { 01 , "nonprintable "}, 
     {'\n', "Newline NL (LF) "}, 
     {'\t', "Horizontal tab HT"}, 
     {'\v', "Vertical tab VT"}, 
     {'\b', "Backspace BS"}, 
     {'\r', "Carriage return CR"}, 
     {'\f', "Form feed FF (Printer)"}, 
     {'D',  "D Character"}, 
     {'\a', "Alert BEL"}, 
     {'A', "Capital A "}, 
     {'\\', "Backslash \\"}, 
     {'\?', "Question mark ? \?"}, 
     {'\'', "Single quote "}, 
     {'0',  "Number Zero "}, 
     {'9',  "Number Nine "}, 
     {'\"', "Double quote"}};

     char x = '\n';

     for( auto it = cmaps.begin(); it !=  cmaps.end(); it++ )
        cout  << "ASCII Value <" << it->first << "> " << it->second << endl; 
   
     return( EXIT_SUCCESS );

  }    
