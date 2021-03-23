#include <iostream>
#include <list>
#include <string>
#include <initializer_list>

class Emp{
    public:
    Emp(std::string fname, std::string lname, std::string dname)
        :first_name{fname}, last_name{lname},dept{dname}{}

    void Print() const{
        std::clog << "First Name  : " << first_name << "  Last Name : " << last_name 
                << "  Dept : " << dept << std::endl;
    }

    private:
        std::string first_name;
        std::string last_name;
        std::string dept;
};

class Manager: public Emp{
    std::list<Emp> Reportees;

    public:
        void AddReportees( std::initializer_list<Emp> list_emp );
        Manager(std::string fname, std::string lname, std::string dname)
        :Emp{fname, lname, dname}{}
        const std::list<Emp>& GetREportees(){
            return Reportees;
        }
};

void Manager::AddReportees( std::initializer_list<Emp> list_emp ){
    for( const auto& e:list_emp){
        Reportees.push_back(e);
    }
}


int main(){
    Emp Emp1{ "Matts", "John", "Training"};
    Emp Emp2{ "John", "Matts", "Training"};
    
    Manager Man1{ "Anil", "Nayak", "BOSCH"};
    Man1.AddReportees( {Emp1, Emp2} );

    for( auto e:Man1.GetREportees() ){
       e.Print();
    }

    return 0;
}