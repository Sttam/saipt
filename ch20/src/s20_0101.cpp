#include<s20_0101.hpp>
#include <iostream>

int main(){
    
    employee e1;
    std::cout << "Size of Employee  : " << sizeof(e1) << std::endl;
    std::cout << "Size of string    : " << sizeof(std::string) << std::endl;
    std::cout << "Number of strings : " << sizeof( e1) / sizeof(std::string) << std::endl;
    e1.first_name = "matts";
    e1.middle_name = "John";
    e1.last_name = "kattarmala";
    e1.dob = "15/05/1967";
    PrintEmployee(e1);



    return 0;
}

void PrintEmployee( employee e){
    std::cout << "first_name   : " << e.first_name  << std::endl;
    std::cout << "middle_name  : " << e.middle_name  << std::endl;
    std::cout << "last_name    : " << e.last_name  << std::endl;
    std::cout << "dob          : " << e.dob  << std::endl;
}