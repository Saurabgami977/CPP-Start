#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void googlify(int n)
{
    string ocount;
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            ocount.append("o");
        }
        cout << "g" << ocount << "gle" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
}

int main()
{
    googlify(10);
    googlify(0);
    googlify(11);
    googlify(-2);
    return 0;
}