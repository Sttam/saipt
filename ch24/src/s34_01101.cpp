/***********************************************************************************************
  Author     : Matts 01 July 2020

  source     :https://docs.microsoft.com/en-us/cpp/cpp/how-to-create-and-use-shared-ptr-instances?redirectedfrom=MSDN&view=vs-2019#:~:text=The%20shared_ptr%20type%20is%20a%20smart%20pointer%20in,arguments%2C%20and%20assign%20it%20to%20other%20shared_ptr%20instances.

  Purpose    : Display how to use shared pointers
               Taken from Microsoft. Possibly Modified to suite our needs
***********************************************************************************************/
/*
     Teaching ideas
The shared_ptr type is a smart pointer in the C++ standard library that is designed for scenarios in 
which more than one owner might have to manage the lifetime of the object in memory. After you initialize 
a shared_ptr you can copy it, pass it by value in function arguments, and assign it to other shared_ptr 
instances. All the instances point to the same object, and share access to one "control block" that increments 
and decrements the reference count whenever a new shared_ptr is added, goes out of scope, or is reset. 
When the reference count reaches zero, the control block deletes the memory resource and itself.

*/
// shared_ptr-examples.cpp
// The following examples assume these declarations:
#include<s34_01101.hpp>

using namespace saip;

int main()
{
    sample01();
}

