//Write a C++ program to prompt the user to input her/his name and print this name on the screen, as shown below. The text from keyboard can be read by using cin>> and to display the text on the screen you can use cout<<.

#include <iostream>

using namespace std;

void greet(string name)
{
    cout << "Hello " << name << endl;
};

int main()
{
    string name;
    cout << "Enter your first Name: ";
    cin >> name;
    greet(name);
}