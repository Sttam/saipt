#include <iostream>

using namespace std;

class Nonlocal
{
public:
    // ...
    void destroy()
    {
        cout << "Dummy Destroy" << endl;
        this->~Nonlocal(); // explicit destruction
    } 
private:
    // ...
    ~Nonlocal(){}; //don’t destroy implicitly
};


int *pi = new int[100];


int main()
{
    //Nonlocal x;
    Nonlocal *p = reinterpret_cast<Nonlocal *>(pi);
    p->destroy();
    delete[] pi;
    string x{"hello"};
    bool res = (x == "hellox");
    cout << "Bool res " << res  << endl;
     return 0;
}