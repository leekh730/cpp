#include <iostream>
using namespace std;

int main(){
    int var = 20; // actual variable declaration
    int *ptr_first; //pointer  variable
    ptr_first = &var; //store address of var in pointer variable
    cout << "var variable : " << var << ", address : " << &var << endl;

    cout << "ptr_first variable : " << ptr_first << ", address : " << &ptr_first << endl;

    cout << "Value of *ptr_first variable : " << *ptr_first << ", address : " << &(*ptr_first);
    return 0;
}