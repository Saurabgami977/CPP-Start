#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream file("saurab.txt");

    vector<std::string> names;

    string input;
    while (file >> input)
    {
        names.push_back(input);
    };

    for (string name : names)
    {
        cout << name << endl;
    }
    return 0;
}