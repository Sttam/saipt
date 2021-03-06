#include <iostream>
using namespace std;
/*
    Access Control.
    A friend.
    Think y we only need to call for the date, but not for
    printing the integer.
*/

class Date
{
private:
    int d, m, y;

public:
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

int main()
{

    Date d;
    cout << d;

    d.init_date(1, 1, 2020);
    cout << d;

    Date c{d};
    cout << c;
    Date e = c;
    cout << e;
}