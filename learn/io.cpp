#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

    string fileName;
    cout << "Enter the file name: ";
    cin >> fileName;

    //creates new file :)
    ofstream file(fileName, ios::app);

    //just in case, to check if files are created
    if (file.is_open())
    {
        cout << "Success!!!" << '\n';
    }

    //creating names vector
    vector<string> names;
    //pushing into array
    names.push_back("Saurab");
    names.push_back("Sunita");
    names.push_back("Manoj");

    //writing into file by uterating all the content of vector
    for (string name : names)
    {
        file << name << endl;
    }
    // optional
    file.close();
    return 0;
}