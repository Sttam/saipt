/***********************************************************************************************
  Author     : Matts Date :19th July 2020 

  Purpose    :  User-Defined Type Conversions (C++)

  Source     :https://docs.microsoft.com/en-us/cpp/cpp/user-defined-type-conversions-cpp?view=vs-2019
***********************************************************************************************/
#include <iostream>
using namespace std;
#define ELOG cout <<  " " << __COUNTER__  <<  endl;
class Money
{
public:
    Money() : amount{ 0.0 } {};
    Money(double _amount) : amount{ _amount } {};
    double amount;
};

void display_balance(const Money balance)
{
    std::cout << "The balance is: " << balance.amount << std::endl;
}

int main(int argc, char* argv[])
{

    Money payable{ 79.99 };
    //Money payable = 79.99; //error

    display_balance(payable);
    display_balance(49.95); 
    display_balance(9.99f);

    return 0;
}

