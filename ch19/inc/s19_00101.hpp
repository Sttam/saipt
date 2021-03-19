#ifndef __s19_00101_hpp
#define __s19_00101_hpp
#include <vector>
#include <string>
using namespace std;

struct Assoc
{
    vector<pair<string, int>> vec;
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

#endif