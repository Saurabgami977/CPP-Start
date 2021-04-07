#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    //______________Constants in C++___________________
    const int a = 34, b=45, c=56;

    //_____________Manipulators => setw & endl_____________
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;

    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;

    //_____________Operator Precedence_______________
    int d = ((((a*5)+b)-56)+34);
    cout<<d;
    return 0;
}