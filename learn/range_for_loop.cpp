#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
    // Normal Array
    // int data[6] = {1, 2, 3, 4, 5, 6};

    //vector array
    vector<int> data = {1, 2, 3, 4, 5, 6};

    //Templatized array
    // array<int, 6> data = {1, 2, 3, 4, 5, 6};

    //Normal loop
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << data[i] << '\t';
    // }

    //Range based for Loop
    for (int n : data)
    {
        cout << n << '\t';
    }
    cout << '\n';

    return 0;
}