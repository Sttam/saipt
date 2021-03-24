#ifndef S20_0102_HPP
#define S20_0102_HPP
#include <string>
using namespace std;
struct employee{

    std::string first_name;
    std::string middle_name;
    std::string last_name;
    std::string dob;
     employee(const string &fn, const string &mn, const string ln, const string &d)
        :first_name{fn}, 
            last_name{ln}, middle_name{mn}, dob{d}{}
    void Print();

};


#endif