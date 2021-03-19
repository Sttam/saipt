/***********************************************************************************************
  Author     : Matts 01 July 2020

  Purpose    : Display how to use shared pointers
               Taken from Microsoft. Possibly Modified to suite our needs
***********************************************************************************************/
/*
     Teaching ideas
Whenever possible, use the make_shared function to create a shared_ptr when the memory 
resource is created for the first time. make_shared is exception-safe. It uses the same call to 
allocate the memory for the control block and the resource, which reduces the construction overhead. 
If you don't use make_shared, then you have to use an explicit new expression to create the object 
before you pass it to the shared_ptr constructor. The following example shows various ways to 
declare and initialize a shared_ptr together with a new object.

*/
#include<s34_01101.hpp>
namespace saip{

using namespace std;

void sample01(){
    // Use make_shared function when possible.
    auto sp1 = make_shared<Song>(L"The Beatles", L"Im Happy Just to Dance With You");


    // Ok, but slightly less efficient. 
    // Note: Using new expression as constructor argument
    // creates no named variable for other code to access.

    shared_ptr<Song> sp2(new Song(L"Lady Gaga", L"Just Dance"));

    // When initialization must be separate from declaration, e.g. class members, 
    // initialize with nullptr to make your programming intent explicit.
    shared_ptr<Song>sp5(nullptr);
    //Equivalent to: shared_ptr<Song> sp5;
    //...

    sp5 = make_shared<Song>(L"Elton John", L"I'm Still Standing");
    
}
}//namespace saip
