/*
    The functions are moved inside the structure definition and it is part of 
    the structure. Now we could say, the member variables are in the context.

    What is the meaning of it?
    What is a "this" pointer?
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

/*
    Note how the functions are named.
    It is defined as return-type classname::member functionn name( Args ....)
*/
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

    Date d;
    d.init_date( 1,1,2020);
    cout << d;

    Date dd;
    //compiler defined default copy;
    dd = d;

    cout << d;
    cout << dd;

    d.add_month(2); cout << d;
    d.add_month( 25); cout << d;

}