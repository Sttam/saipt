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

    Date d;
    d.init_date( 1,1,2020);
    cout << d;

    d.add_month(2); cout << d;
    d.add_month( 25); cout << d;

}