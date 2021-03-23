#include <s20_0105.hpp>
#include <iostream>

int main(){
    
    employee e1{ "Emp1", "John", "kattamala", "15/05/1967"};
    employee e2 {"Emp2", "Joseph", "kattarmala", "15/05/1967"};
  

    manager m1{ "Man1", "Man1 M Name", "Man1 L Name", "15/05/1967" };
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
    employee::Print();

    std::cout << std::endl << "Team members" << std::endl;
    std::cout <<              "============" << std::endl;
    for( auto& x:ve){
        x.Print();
    }
}