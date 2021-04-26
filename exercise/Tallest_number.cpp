//Tallest Birthday Cake Candles

//https://edabit.com/challenge/mBZhZ4vXvSejkaHdz

// You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int tallest_calculator(vector<int> candles)
{
    int largest = 0;
    int count = 1;
    for (int i = 0; i < candles.size(); i++)
    {
        if (largest < candles[i])
        {
            largest = candles[i];
            count = 1;
        }
        else if (candles[i] == largest)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    cout << tallest_calculator({4, 4, 1, 4, 3, 3, 4});
}