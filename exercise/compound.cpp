// Write a program to calculate the (compound) interest on an initial investment of £100 at an annual interest rate of 5% by using a loop structure. Do not derive or use the compound interest formula. The idea is to use a loop structure to add the compound interest to the present balance. You should assume that interest is paid annually and print the balance every year for 10 years.

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    // The type "double" is a floating-point type much
    //like "float" but with greater precision.

    double amount,          // amount on deposit
        principal = 1000.0, // starting principal
        rate = .05;         // interest rate

    cout << "Year" << setw(21)
         << "Amount on deposit" << endl;

    for (int year = 1; year <= 10; year++)
    {
        // function "pow( x, y ) calculates the
        // value of "x" raised to the "yth" power.
        // This function requires "math.h" file.
        amount = principal * pow(1.0 + rate, year);
        cout << setw(4) << year
             // This means a field width of 4 for spacing.
             << setiosflags(ios::fixed | ios::showpoint)
             << setw(21) << setprecision(2)
             << amount << endl;
    }

    return 0;
}