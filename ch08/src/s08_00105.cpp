/***********************************************************************************************
  Author     : Matts Date : 10 June 2020

  Purpose    : 
     
     it is not possible to declare new objects of a struct until its complete declaration has been
     seen. For example:
         struct No_good {
           No_good member; // error : recursive definition
         };
***********************************************************************************************/
#include <iostream>
using namespace std;
/*
----->struct Names
     The name of a type becomes available for use immediately after 
     it has been encountered and not
     just after the complete declaration has been seen. For example:
*/
struct List;

struct Link {
   Link* pre;
   Link* suc;
   List* member_of;
   int data;
};

struct List {
   Link* head;
};

/*
struct No_good { 
    No_good member; // error : recursive definition
};
*/

void PrintData( Link& p );
int main( int argc, char *argv[] ){
     Link  head;
     head.data = 200;
     head.pre = nullptr;
     head.suc = nullptr;

}
