#include <iostream>
#include <vector>
using namespace std;
/*
 Explicit Constructors

*/ 

class Date
{
private:
    int d, m, y;

public:
    explicit Date(int d = 0, int m = 0, int y = 0);
    void init_date(int, int, int); // initialize d
    void add_year(int n);          // add n years to d
    void add_month(int n);         // add n months to d
    void add_day(int n);           // add n days to d
    friend ostream &operator<<(ostream &s, Date &d);
};

ostream &operator<<(ostream &s, Date &d)
{
    s << "Day : " << d.d << " Month : " << d.m << " Year : " << d.y << endl;
    return s;
}
Date::Date(int dd, int mm, int yy)
{
    dd ? d = dd : d = 1;
    mm ? m = mm : m = 1;
    yy ? y = yy : y = 1970;
}

void Date::init_date(int dd, int mm, int yy)
{
    d = dd;
    m = mm;
    y = yy;
}

void Date::add_month(int n)
{
    int mm = m + n;
    m += n;
    if (mm > 12)
    {
        m %= 12;
        y += mm / 12;
    }
}
void f( Date d){
    cout << "Dummy Test" << d;
}

int main()
{

    Date d{1,2,2020};   cout << d;
    //f(1);

    f(Date{20,2});
    return 0;

}