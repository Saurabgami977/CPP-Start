#include <iostream>

using namespace std;

int main()
{
    //___________Program to find quotient and remainder_____________
        // int divisor, dividend, quotient, remainderr;
        // cout<<"Enter Dividend: ";
        // cin>>dividend;
        // cout<<"Enter Divisor: ";
        // cin>>divisor;
        // quotient = dividend / divisor;
        // remainderr = dividend%divisor;
        // cout<<"Quotient = " <<quotient <<endl;
        // cout<<"Remainder = " <<remainderr;


    //___________Program to find quotient and remainder_____________
        // int number;
        // cout<<"Enter a number: ";
        // cin>>number;
        // (number%2 == 0) 
        //     ? cout <<number <<" is even." 
        //     : cout <<number <<" is odd.";


    //___________Program to check vowel or consonant manually_____________
        // char c;
        // int isLowercaseVowel, isUppercaseVowel;

        // cout<<"Enter an alphabet: ";
        // cin>>c;

        // isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        // isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

        // !isalpha(c) 
        //     ? cout<<"Error! Non-alphabetic character."
        //         : isLowercaseVowel || isUppercaseVowel 
        //             ? cout<<c<<" is vowel" 
        //             : cout<<c<<" is consonant.";


    //___________Program to Find largest number among 3 numbers_____________
        float a,b,c;
        cout<<"Enter 3 numbers: ";
        cin >>a >>b >>c;
        if((a>=b) && (a>=c)){
            cout <<a <<" is the largest number";
        }else if((b >= a) && (b >= c)){
            cout <<b <<" is the largest number";
        }else{
            cout <<c <<" is the largest number";
        }

    return 0;
}