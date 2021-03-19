#ifndef __S08_00101_HPP
#define __S08_00101_HPP
namespace saip{

struct Address {
    const       char* name; 
    int         number; 
    const char* street; 
    const char* town; 
    char state[2]; 
    const char* zip; 
};
void PrintAddress( Address& ad );

}//saip
#endif //__S08_00101_HPP
