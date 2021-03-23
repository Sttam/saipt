#include <s20_0103.hpp>
#include <iostream>

int main(){
    
    employee e1{ "matts", "John", "kattarmala", "15/05/1967"};

    std::cout << "Size of Employee  : " << sizeof(e1) << std::endl;
    std::cout << "Size of string    : " << sizeof(std::string) << std::endl;
    std::cout << "Number of strings : " << sizeof( e1) / sizeof(std::string) << std::endl;
    
    e1.Print();

    employee e2 = e1;
    employee e3 = e2;
    manager m1;
    m1.first_name = "Man1 FirstName";
    m1.middle_name =  "Man1 Middle Name";
    m1.last_name = "Man1 Last Name";
    m1.dob = "15/05/1967";
    m1.ve.push_back(e1);
    m1.ve.push_back(e2);
    m1.Print();




    return 0;
}

void employee::Print(){
    std::cout << "first_name   : " << first_name  << std::endl;
    std::cout << "middle_name  : " << middle_name  << std::endl;
    std::cout << "last_name    : " << last_name  << std::endl;
    std::cout << "dob          : " << dob  << std::endl;
}

void manager::Print(){
    std::cout << "first_name   : " << first_name  << std::endl;
    std::cout << "middle_name  : " << middle_name  << std::endl;
    std::cout << "last_name    : " << last_name  << std::endl;
    std::cout << "dob          : " << dob  << std::endl;

    for( auto& x:ve){
        x.Print();
    }
}