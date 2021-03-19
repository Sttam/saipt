#include <iostream>
#include <vector>
using namespace std;
/*
Static Members

*/ 

class Date
{
private:
    int d, m, y;

    
public:
    static Date default_date;
    explicit Date(int d = 0, int m = 0, int y = 0);
    Date& add_year(int n);          // add n years to d
    Date& add_month(int n);         // add n months to d
    Date& add_day(int n);           // add n days to d
    static void set_default(int dd, int mm, int yy);
    friend ostream &operator<<(ostream &s,const Date &d);
};

ostream &operator<<(ostream &s, const Date &d)
{
    s << "Day : " << d.d << " Month : " << d.m << " Year : " << d.y << endl;
    return s;
}
Date::Date(int dd, int mm, int yy)
{
    dd ? d = dd : d = default_date.d;
    mm ? m = mm : m = default_date.m;
    yy ? y = yy : y = default_date.y;
}

void Date::set_default(int dd, int mm, int yy){
    Date::default_date = Date{dd, mm, yy};
    
}


Date& Date::add_month(int n)
{
    int mm = m + n;
    m += n;
    if (mm > 12)
    {
        m %= 12;
        y += mm / 12;
    }
    return *this;
}

Date& Date::add_year(int n)
{
    y += n;
    return *this;
}

Date Date::default_date = Date{ 2,8,1966};

int main()
{

    Date d;   cout << d;
    d.add_month(20).add_year(2);

    Date::set_default(1,2,2020);
    Date d2; cout << d2;
    
    return 0;

}