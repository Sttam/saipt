#include <iostream>
using namespace std; 
/*
structure, all members are public by default.
There is no other difference. 
So please treat class and structure as same.
This example is to show how disconnected the data memebers are.
*/

struct Date { 
    int d, m, y;
};

void init_date(Date& d, int, int, int); // initialize d
void add_year(Date& d, int n);          // add n years to d
void add_month(Date& d, int n);         // add n months to d
void add_day(Date& d, int n);           // add n days to d

ostream& operator<<( ostream &s, Date &d){
    s << "Day : " << d.d << " Month : " << d.m << " Year : " << d.y << endl; 
    return s;
}

void init_date(Date& d, int dd, int mm, int yy){
    d.d = dd;
    d.m = mm;
    d.y = yy;
}

void add_month( Date &d, int n){
    int mm = d.m + n;
    d.m += n;
    if( mm > 12 ){
        d.m %= 12;
        d.y += mm/12;
    }
}

int main(){

    Date d;
    init_date( d, 1,1,2020);
    cout << d;

    add_month(d, 2); cout << d;
    add_month(d, 25); cout << d;

    cout << "Size of Date : " << sizeof(Date) << endl;

}