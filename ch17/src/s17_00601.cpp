#include <iostream>
using namespace std;

struct Work
{
    string author;
    string name;
    int year;
};

Work s9 { "Beethoven", "Symphony No. Choral", 1824 };  

Work currently_playing { s9 }; // copy initialization


//Where no constructor requiring arguments is declared, 
//it is also possible to leave out the initializer completely.
Work none {}; // default initialization {"","",0}

int main()
{

    int a{1};
    char *p{nullptr};
}