#include <s23_00101.hpp>
#include <iostream>

using namespace saip;


int main()
{
    String<char> s{"Hello\n"};
    std::cout << s;
    String<char> s2{"HLLLLLLLLLLLLLLLLLLLong String .......ello\n"};
    std::cout << s2;
    
    return 0;
}