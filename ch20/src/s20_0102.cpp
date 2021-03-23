#include <s20_0102.hpp>
#include <iostream>

int main(){
    
    employee e1{ "matts", "John", "kattarmala", "15/05/1967"};

    std::cout << "Size of Employee  : " << sizeof(e1) << std::endl;
    std::cout << "Size of string    : " << sizeof(std::string) << std::endl;
    std::cout << "Number of strings : " << sizeof( e1) / sizeof(std::string) << std::endl;
    
    e1.Print();
    employee e2{"Emp2", "Middle Name", "Last Name ", "15/05/1997"};
    e2.Print();



    return 0;
}

void employee::Print(){
    std::cout << "first_name   : " << first_name  << std::endl;
    std::cout << "middle_name  : " << middle_name  << std::endl;
    std::cout << "last_name    : " << last_name  << std::endl;
    std::cout << "dob          : " << dob  << std::endl;
}