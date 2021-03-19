/***********************************************************************************************
  Author     : Matts 01 July 2020

  Purpose    : Display how to use shared pointers
               Taken from Microsoft. Possibly Modified to suite our needs
***********************************************************************************************/
/*
     Teaching ideas
     The following example shows how shared_ptr overloads various comparison operators to enable pointer
     comparisons on the memory that is owned by the shared_ptr instances.


*/
#include<s34_01101.hpp>
namespace saip{

using namespace std;

void sample06( ){

    auto song1 = new Song(L"Village People", L"YMCA");
    auto song2 = new Song(L"Village People", L"YMCA");

    // Create two unrelated shared_ptrs.
    shared_ptr<Song> p1(song1);    
    shared_ptr<Song> p2(song2);
    
    // Unrelated shared_ptrs are never equal.
    wcout << "p1 < p2 = " << std::boolalpha << (p1 < p2) << endl;
    wcout << "p1 == p2 = " << std::boolalpha <<(p1 == p2) << endl;
    
    // Related shared_ptr instances are always equal.
    shared_ptr<Song> p3(p2);
    wcout << "p3 == p2 = " << std::boolalpha << (p3 == p2) << endl; 
    
    return;

}
}//namespace saip
