#include <iostream>

using namespace std;

void print(int a)
{
    for (int j = 0; j < a; j++)
        cout << '*';
    cout << endl;
};

int main()
{
    print(4);
    print(5);
    print(6);
    print(7);
    print(8);
}