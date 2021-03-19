/***********************************************************************************************
  Author     : Matts Date : 1Cleaned up presentation of s08_00303.cpp ( Is it a sublime pearly lotus ? )

  Purpose    :  User-Defined Type Conversions (C++)
                Conversion functions 

  Source     : https://docs.microsoft.com/en-us/cpp/cpp/user-defined-type-conversions-cpp?view=vs-2019
***********************************************************************************************/
#include <iostream>
class Money
{
public:
    Money() : amount{ 0.0 } {};
    Money(double _amount) : amount{ _amount } {};
    explicit operator double() const { return amount; }
private:
    double amount;
};

void display_balance(const Money balance)
{
    std::cout << "The balance is: " << double(balance) << std::endl;
}

int main(int argc, char* argv[])
{
    Money payable{ 79.99 };        // Legal: direct initialization is explicit.

    display_balance(payable);      // Legal: no conversion required
    display_balance(49.95);        // No issues
    display_balance((Money)9.99f); // Legal: explicit cast to Money

    return 0;
}
