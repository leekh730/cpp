#include <iostream>
#include "FunctionCallValue.cpp"
using namespace std;


extern int sum(int first, int second);

int main(){
    int first = 100, second = 200, third = 300, result;
    result = sum(first, second);
    cout << "Total value is : " << result << endl;
    cout << "Total value is : " << sum(second, third) << endl;
    return 0;
}