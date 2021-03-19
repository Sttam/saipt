#include <iostream>
#include <vector>

using namespace std;

struct Tracer
{
    string mess;
    Tracer(const string &s) : mess{s} { clog << mess; }
    ~Tracer() { clog << "~" << mess; }
};

void f(const vector<int> &v)
{
    Tracer tr{"in f()\n"};
    for (auto& x : v)
    {
        Tracer tr{string{"v loop "} + to_string(x) + '\n'};
        // ... scope of tr goes out with for .
    }
}

constexpr int maxcount{4};

int main()
{
    f({4,5,8});
    return 0;
}