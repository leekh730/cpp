#include<iostream>

using namespace std;

#include "MaxParam.cpp"
extern int max(int, int); // function declaration

int main(){
    int first = 100, second = 200, result;
    // result = max(first, second);
    // cout << "Max value is : " << result << endl;
    cout << "Max value is : " << max(second, first) <<endl;
    return 0;
}