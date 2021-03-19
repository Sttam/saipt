#include <iostream>
#include <vector>
using namespace std;
/*
Self Reference 
add_date
operator << for ostream

*/ 

class Date
{
private:
    int d, m, y;
    
    mutable bool cache_valid;
    mutable string cache;
    void compute_cache_value() const;
public:
    explicit Date(int d = 0, int m = 0, int y = 0);
    Date& add_year(int n);          // add n years to d
    Date& add_month(int n);         // add n months to d
    Date& add_day(int n);           // add n days to d
    string string_rep() const;
    friend ostream &operator<<(ostream &s,const Date &d);
};

ostream &operator<<(ostream &s, const Date &d)
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

string Date::string_rep()const{
     cache = "Testing the cache";
     return cache;
}
void f( const Date d){
    cout << d.string_rep() << endl;
}

int main()
{

    Date d{1,2,2020};   cout << d;
    d.add_month().add_year(2);
    cout << d;
    cout << "Tell where else" << "self reference " << comes << endl;
    
    return 0;

}