#ifndef M16_005_HPP
#define M16_005_HPP
#include <string>
#include <vector>
using namespace std;

struct employee{

    string first_name;
    string middle_name;
    string last_name;
    string dob;
    employee(const string &fn, const string &mn, const string ln, const string &d)
        :first_name{fn}, 
            last_name{ln}, middle_name{mn}, dob{d}{}
    void Print();

};

struct manager:public employee{

    std::vector<employee>ve;

    manager(const string &fn, const string &mn, const string &ln, const string &d)
                :employee( fn, mn, ln, d){}

    void Print();

};



#endif