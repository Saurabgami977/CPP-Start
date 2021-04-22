#include <iostream>

using namespace std;

// Create a function that takes voltage and current and returns the calculated power.
void power(int voltage, int power)
{
    cout << "power = " << voltage * power << endl;
}

// Create a function that return remainder.
void remainder(int a, int b)
{
    cout << "remainder = " << a % b << endl;
}

//Convert Minutes into Seconds
int convert(int min)
{
    return min * 60;
}

int main()
{
    // Write a C++ program to prompt the user to input 3 integer values and print these values in forward and reversed order, as shown below.
    // int val1;
    // int val2;
    // int val3;
    // cout << "Please Enter your 3 numbers: ";
    // cin >> val1 >> val2 >> val3;
    // cout << "Your number is forward order: " << val1 << '\t' << val2 << '\t' << val3 << '\t' << endl;
    // cout << "Your number is reersed order: " << val3 << '\t' << val2 << '\t' << val1 << '\t' << endl;

    // power(230, 10); //➞ 2300
    // power(110, 3); //➞ 330
    // power(480, 20); //➞ 9600

    remainder(1, 3);   //➞ 1
    remainder(3, 4);   // ➞ 3
    remainder(-9, 45); // ➞ -9
    remainder(5, 5);   // ➞ 0

    cout << convert(5) << endl;
    cout << convert(3) << endl;
    cout << convert(2) << endl;
}