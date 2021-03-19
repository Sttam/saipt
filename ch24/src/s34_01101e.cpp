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
/*
   You can pass a shared_ptr to another function in the following ways:

   Pass the shared_ptr by value. This invokes the copy constructor, increments 
   the reference count, and makes the callee an owner. There's a small
   amount of overhead in this operation, which may be significant depending 
   on how many shared_ptr objects you're passing. Use this option when 
   the implied or explicit code contract between the caller and callee 
   requires that the callee be an owner.

   Pass the shared_ptr by reference or const reference. In this case, the 
   reference count isn't incremented, and the callee can access the pointer 
   as long as the caller doesn't go out of scope. Or, the callee can decide 
   to create a shared_ptr based on the reference, and become a shared owner. 
   Use this option when the caller has no knowledge of the callee, or when 
   you must pass a shared_ptr and want to avoid the copy operation for performance reasons.

   Pass the underlying pointer or a reference to the underlying object. 
   This enables the callee to use the object, but doesn't enable it to 
   share ownership or extend the lifetime. If the callee creates a shared_ptr 
   from the raw pointer, the new shared_ptr is independent from the 
   original, and doesn't control the underlying resource. Use this option 
   when the contract between the caller and callee clearly specifies that 
   the caller retains ownership of the shared_ptr lifetime.


   When you're deciding how to pass a shared_ptr, determine whether the
   callee has to share ownership of the underlying resource. 
   An "owner" is an object or function that can keep the underlying
   resource alive for as long as it needs it. If the caller has to 
   guarantee that the callee can extend the life of the pointer beyond 
   its (the function's) lifetime, use the first option. If you don't 
   care whether the callee extends the lifetime, then pass by reference 
   and let the callee copy it or not.

   If you have to give a helper function access to the underlying pointer, 
   and you know that the helper function will just use the pointer and return 
   before the calling function returns, then that function doesn't have to share 
   ownership of the underlying pointer. It just has to access the pointer within the 
   lifetime of the caller's shared_ptr. In this case, it's safe to pass the shared_ptr 
   by reference, or pass the raw pointer or a reference to the underlying object. Passing 
   this way provides a small performance benefit, and may also help you express your programming intent.

   Sometimes, for example in a std::vector<shared_ptr<T>>, you may have to pass each shared_ptr 
   to a lambda expression body or named function object. If the lambda or function doesn't store the 
   pointer, then pass the shared_ptr by reference to avoid invoking the copy constructor for each element.
*/

void sample05( ){

    return;

}
}//namespace saip
