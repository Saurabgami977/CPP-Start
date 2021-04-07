#include<iostream>
using namespace std;

int
main ()
{
  //Pointer is a data type which holds the address of other data types.
  int a = 3;
  int* b = &a;

  //& => address of operator
  cout << b <<endl;
  cout << &a <<endl;

// * => value at/ dereference operator
cout<<*b<<endl;

  return 0;
}
