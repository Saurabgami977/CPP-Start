#include<iostream>

using namespace std;

int power(double base, int exponent){
    int result = 1;
    for(int i = 0; i< exponent; i++){
        result = result * base;
    }   
    return result;
}

int main(){
    int myPower = power(10, 3);
    cout<<myPower;
    return 0;
}
