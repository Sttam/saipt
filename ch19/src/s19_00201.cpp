/*
Function call notation expression-list, can be interpreted as a binary operation
with the expression as the left-hand operand and the expression-list as the right-hand operand.
The call operator, (), can be overloaded in the same way as other operators are overloaded.
*/
#include <iostream>
#include <utility>

using namespace std;

struct Action
{
    int operator()(int);
    pair<int, int> operator()(int, int);
    double operator()(double);
    private:
      // ...
};

int Action::operator()(int x){
  return x;
}

double Action::operator()(double x){
  return x;
}

std::pair<int,int> Action::operator()(int x, int y){
  return make_pair(x,y);
}



int main(){
    
Action act;

int x = act(2);
auto y = act(3,4);
//int yy = act(3,4);
double z = act(2.3);
// ...
return 0;
}

