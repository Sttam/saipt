/***********************************************************************************************
  Author     : Matts 01 July 2020

  Purpose    : Display how to use shared pointers
               Taken from Microsoft. Possibly Modified to suite our needs
***********************************************************************************************/
/*
     Teaching ideas

*/
// shared_ptr-examples.cpp
// The following examples assume these declarations:
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include<s34_01101.hpp>
namespace saip{

using namespace std;

void sample02( 
         shared_ptr<Song>& sp1,
         shared_ptr<Song>& sp2) {
   //Initialize with copy constructor. Increments ref count.
   auto sp3(sp2);

   //Initialize via assignment. Increments ref count.
   auto sp4 = sp2;

   //Initialize with nullptr. sp7 is empty.
   shared_ptr<Song> sp7(nullptr);

   // Initialize with another shared_ptr. sp1 and sp2
   // swap pointers as well as ref counts.
   sp1.swap(sp2); 
}
}//namespace saip
