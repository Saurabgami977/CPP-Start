#include<iostream>

using namespace std;

int main(){
    int gpa;
    cout<<"Enter your GPA"<<endl;
    cin>>gpa;
    //If else statements
    if((gpa<=2) && (gpa>0)){
        cout<<"You can't join our school.";
    }
    else if(gpa<3){
        cout<<"You need to take some extra classes.";
    }
    else if((gpa>3) && (gpa<4)){
        cout<<"You can join our school";
    }
    else{
        cout<<"Please enter valid GPA";
    }
    return 0;
}