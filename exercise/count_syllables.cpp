// Create a function that counts the number of syllables a word has. Each syllable is separated with a dash -.

#include <iostream>

using namespace std;

void numberOfSyllables(string a)
{
    int count = 1;
    for (int i = 0; i < a.length(); i++)
    {
        a[i] == '-' ? count++ : count;
    }
    cout << a << " = " << count << endl;
}

int main()
{
    numberOfSyllables("buf-fet");
    numberOfSyllables("beau-ti-ful");
    numberOfSyllables("mon-u-men-tal");
    numberOfSyllables("on-o-mat-o-poe-ia");

    return 0;
}