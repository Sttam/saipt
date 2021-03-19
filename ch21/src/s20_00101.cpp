#include <iostream>
#include <string>
class Emp{
    public:
    Emp(std::string fname, std::string lname, std::string dname)
        :first_name{fname}, last_name{lname},dept{dname}{}

    void Print(){
        std::clog << "First Name  : " << first_name << "  Last Name : " << last_name 
                << "  Dept : " << dept << std::endl;
    }

    private:
        std::string first_name;
        std::string last_name;
        std::string dept;
};

int main(){
    Emp FEmp{ "Matts", "John", "Training"};
    FEmp.Print();

    return 0;
}