#include <vector>
#include <iostream>
#include <initializer_list>
using namespace std;

class myClass{
public:
    myClass( initializer_list<int>args );
    myClass(){}
  
   
    void print();
private:
    vector<int> vi;

};

myClass::myClass(initializer_list<int>args){
    int count = 0;
    for(auto const& x:args){
        vi.push_back(x);
    }
}

void myClass::print(){
    auto i = 0;
    for( auto& s:vi){
        cout << i++ << "  value " << s << endl; 
    }
}

int main(){

    myClass mc{20,25,30,40,49,57,77,93};
    mc.print();

    cout << "Printing second list" << endl;
    myClass mc2;
    mc2.print();

}