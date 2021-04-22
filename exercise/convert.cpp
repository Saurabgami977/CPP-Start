#include <iostream>

using namespace std;

void convert(int a)
{
    cout << a * 60 << endl;
};

int main()
{
    convert(4);
    convert(8);
    convert(123);
}