//Take an array of integers (positive or negative or both) and return the sum of the absolute value of each element.

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int calculate_sum(vector<int> array)
{
    int total = 0;
    for (int i = 0; i < array.size(); i++)
    {
        total += abs(array[i]);
    };
    return total;
}

int main()
{
    vector<int> array = {-3};
    cout << calculate_sum(array) << endl;
    return 0;
}
