#include<iostream>

using namespace std;

int c=12;

int main(){
    //________________SCOPE__________________
    int a, b, c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c; //scope resolution 

    //_________________Float, Double, Long Double_________________
    float d=34.4f;
    long double e=34.4l;
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;

    //________________Reference variables__________________
    float zero = 333;
    float & one = zero;
    cout<<zero<<endl<<one;

    //__________________Type Casting____________________
    int lion = 12;
    float tiger = 23.23;
    cout<<"The value of lion is "<<float(lion); //changing into float
    cout<<"The value of tiger is "<<int(tiger)<<endl; // Changing into int
    return 0;
}