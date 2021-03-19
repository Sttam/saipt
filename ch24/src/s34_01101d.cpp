/***********************************************************************************************
  Author     : Matts 01 July 2020

  Purpose    : Display how to use shared pointers
               Taken from Microsoft. Possibly Modified to suite our needs
***********************************************************************************************/
/*
     Teaching ideas

     You can use dynamic_pointer_cast, static_pointer_cast, and const_pointer_cast to cast a shared_ptr. 
     These functions resemble the dynamic_cast, static_cast, and const_cast operators. The following example 
     shows how to test the derived type of each element in a vector of shared_ptr of base classes, and then 
     copy the elements and display information about them.

*/
#include<s34_01101.hpp>

namespace saip{
using namespace std;

void sample04( ){

    vector<shared_ptr<MediaAsset>> assets {
      make_shared<Song>(L"Himesh Reshammiya", L"Tera Surroor"),
      make_shared<Song>(L"Penaz Masani", L"Tu Dil De De"),
      make_shared<Photo>(L"2011-04-06", L"Redmond, WA", L"Soccer field at Microsoft.") };

    vector<shared_ptr<MediaAsset>> photos;

    copy_if(assets.begin(), assets.end(), back_inserter(photos), [] (shared_ptr<MediaAsset> p) -> bool{
        // Use dynamic_pointer_cast to test whether
        // element is a shared_ptr<Photo>.
        shared_ptr<Photo> temp = dynamic_pointer_cast<Photo>(p);
        return temp.get() != nullptr;
   });

  for (const auto&  p : photos){
      // We know that the photos vector contains only 
      // shared_ptr<Photo> objects, so use static_cast.
      wcout << "Photo location: " << (static_pointer_cast<Photo>(p))->location << endl;
  }
}
}//namespace saip
