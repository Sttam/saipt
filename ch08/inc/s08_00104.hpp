#ifndef __S08_00101_HPP
#define __S08_00101_HPP
namespace saip{

// These are used microsoft specific compiler.
// documented for to show how this is carried out in Windows environment
//#define CACHE_LINE  32
//#define CACHE_ALIGN __declspec(align(CACHE_LINE))
//struct CACHE_ALIGN simple1
struct simple1
  {
    char    name[13]; 
    int     number; 
    char    street[31]; 
    char    town[31]; 
    double  mydouble; 
    char    state[3]; 
    int     number2; 
    char    zip[6]; 
};

#define CACHE_LINE  32
#define CACHE_ALIGN 
//Here the number is the first element
//which forces the struct to start at natual alignment and 
//may reduce  the reported size of the struct.
//Make no mistake, memory used maynot change.

struct    simple2{
    int     number; 
    char    name[13]; 
    char    street[31]; 
    char    town[31]; 
    double  mydouble; 
    char    state[3]; 
    int     number2; 
    char    zip[6]; 
};

}//saip
#endif //__S08_00101_HPP
