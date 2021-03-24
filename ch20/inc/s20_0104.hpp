#ifndef S20_0104_HPP
#define S20_0104_HPP
#include <string>
#include <vector>
struct employee{

    std::string first_name;
    std::string middle_name;
    std::string last_name;
    std::string dob;
    void Print();

};

struct manager:public employee{

    std::vector<employee>ve;
    void Print();

};



#endif