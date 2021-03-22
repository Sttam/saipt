/*
    Compiler carries out many default actions. If the default action is not 
    what you need, you are responsible to alter the behavior.

    Default Copying ....

    int x = 10; float y = 20.00;
    How do you copy x and y together?
    We talked about struct and copy of arrays.
    ....
    Think what compilers can do...




*/
#include <iostream>
using namespace std; 
namespace matts{

struct Date { 
    int d, m, y;

void init_date( int, int, int); // initialize d
void add_year( int n);          // add n years to d
void add_month( int n);         // add n months to d
void add_day( int n);           // add n days to d


};

ostream& operator<<( ostream &s, Date &d){
    s << "Day : " << d.d << " Month : " << d.m << " Year : " << d.y << endl; 
    return s;
}


void Date::init_date(int dd, int mm, int yy){
    d = dd;
    m = mm;
    y = yy;
}

void Date::add_month( int n){
    int mm = m + n;
    m += n;
    if( mm > 12 ){
        m %= 12;
        y += mm/12;
    }
}

}//namespace

using namespace matts;
int main(){

    Date d; cout << d;

    d.init_date( 1,1,2020); cout << d;

    Date c{d}; cout << c;
    Date e = c; cout << e;

}