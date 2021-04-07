#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

void playGame(){
    int random = rand() % 251;
    cout<<random <<endl;
    cout<<"Enter the guess number: ";
    while(true){
        int guess;
        cin >> guess;
        if(guess == random){
            cout<<"You Win!!!\n";
            break;
        }else if(guess < random){
            cout<<"Its too low!!!\n";
            cout<<"Enter the guess number again: ";
        }else{
            cout<<"Its too High!!!\n";
            cout<<"Enter the guess number again: ";
        }
    }
};

int main (){
    srand(time(NULL));
    int choice;
    do{
    cout<<"0. Quit" <<endl << "1. Play Game" <<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch (choice)
    {
    case 0:
        cout<<"Thanks! You Quit." <<endl;
        break;
    default:
        playGame();
        break;
    }
    }while(choice != 0);
    return 0;
}