#ifndef __s19_00101_hpp
#define __s19_00101_hpp
#include <vector>
#include <string>
using namespace std;

struct Assoc
{

    vector<pair<string, int>> vec;

    const int& operator[] (const string&) const;
    int &operator[](const string &);
};

int& Assoc::operator[](const string &s)
{

    for (auto &x : vec)
        if (s == x.first)
            return x.second;

    vec.push_back({s, 0});    // initial value: 0
    return vec.back().second; // return last element
}

const int zero{0};
const int& Assoc::operator[] (const string& s) const
{
    for ( const auto &x : vec)
        if (s == x.first)
            return x.second;

    return zero;
}

#endif