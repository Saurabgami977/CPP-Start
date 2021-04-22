#include <iostream>

using namespace std;

int AreaOfTriangle(int base, int height)
{
    int area = (base * height) / 2;
    return area;
}

int main()
{

    //Write a function that takes the base and height of a triangle and return its area.
    //The area of a triangle is: (base * height) / 2

    cout << "Area of triangle is: " << AreaOfTriangle(10, 10) << endl;
}