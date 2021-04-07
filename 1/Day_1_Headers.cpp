// 1. System defined header files
#include<iostream>
// 1. User defined header files imported from local
#include "head.cpp"


using namespace std;

int a=4, b=5;

int main () {
    //Arthmetic operators
    cout<<"The value of a+b is "<<a+b<<endl; // 9
    cout<<"The value of a-b is "<<a-b<<endl; // -1
    cout<<"The value of a*b is "<<a*b<<endl; // 20
    cout<<"The value of a/b is "<<a/b<<endl; // 0
    cout<<"The value of a%b is "<<a%b<<endl; // 4
    cout<<"The value of a++ is "<<a++<<endl; // 4
    cout<<"The value of a-- is "<<a--<<endl; // 5
    cout<<"The value of ++a is "<<++a<<endl; // 5
    cout<<"The value of --a is "<<--a<<endl; // 4

    //Assignment operators => assign values to variables,
    // int a=3, b=8;
    // char d='d';

    //Comparison operators
    cout<<"Comparison operators"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;   // 0
    cout<<"The value of a!=b is "<<(a!=b)<<endl;   // 1
    cout<<"The value of a>b is "<<(a>b)<<endl;     // 0
    cout<<"The value of a<b is "<<(a<b)<<endl;     // 1
    cout<<"The value of a<=b is "<<(a<=b)<<endl;   // 1
    cout<<"The value of a>=b is "<<(a>=b)<<endl;   // 0

    //Logical operators
    cout<<"Logical operators"<<endl;
    cout<<"The value of a==b && a<b is "<<((a==b) && (a<b))<<endl; //false || 0
    cout<<"The value of a==b || a<b is "<<((a==b) || (a<b))<<endl; //true || 1
    cout<<"The value of not operator is: "<<(!(a==b))<<endl; //true || 1

    return 0;
}