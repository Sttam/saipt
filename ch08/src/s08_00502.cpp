/***********************************************************************************************
  Author     : Matts Date : 1Cleaned up presentation of s08_00303.cpp ( Is it a sublime pearly lotus ? )

  Purpose    :  User-Defined Type Conversions (C++)
                The explicit keyword and problems with implicit conversion

  Source     : https://docs.microsoft.com/en-us/cpp/cpp/user-defined-type-conversions-cpp?view=vs-2019
***********************************************************************************************/
#include <iostream>
class Money
{
public:
    Money() : amount{ 0.0 } {};
    explicit Money(double _amount) : amount{ _amount } {};

    double amount;
};

void display_balance(const Money balance)
{
    std::cout << "The balance is: " << balance.amount << std::endl;
}

int main(int argc, char* argv[])
{
    Money payable{ 79.99 };        // Legal: direct initialization is explicit.
//  Money payable1 = { 79.99 };    // Error

    display_balance(payable);      // Legal: no conversion required
//  display_balance(49.95);        // Error: no suitable conversion exists to convert from double to Money.
    display_balance((Money)9.99f); // Legal: explicit cast to Money

    return 0;
}
