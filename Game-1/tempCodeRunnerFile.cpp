#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void print_vector(vector<int> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << '\t';
    }

    cout << endl;
}

void playGame()
{

    vector<int> guesses = {};

    int random = rand() % 251;
    cout << random << endl;
    cout << "Enter the guess number: ";
    while (true)
    {
        int guess;
        cin >> guess;
        guesses.push_back(guess);
        if (guess == random)
        {
            cout << "You Win!!!\n";
            break;
        }
        else if (guess < random)
        {
            cout << "Its too low!!!\n";
            cout << "Enter the guess number again: ";
        }
        else
        {
            cout << "Its too High!!!\n";
            cout << "Enter the guess number again: ";
        }
    }
    print_vector(guesses);
};

int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        cout << "0. Quit" << endl
             << "1. Play Game" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thanks! You Quit." << endl;
            break;
        default:
            playGame();
            break;
        }
    } while (choice != 0);
    return 0;
}