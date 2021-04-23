// Square Root of Number program in C++

#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float number, root;
    cout << "Enter the number whose root is to be found: ";
    cin >> number;
    root = sqrt(number);
    cout << "Square root of " << number << " is " << root << endl;
}