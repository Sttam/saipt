#include <iostream>
#include <s16_0101.hpp>

using namespace std;

int main(){

    X myx{30};
    

    cout << "Size of the Class : " << sizeof(myx) << endl;
    cout << "Hello " << myx.mf(40) << endl;
    cout << "Hello " << myx.mf(60) << endl;


}
