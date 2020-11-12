#include <iostream>
using namespace std;

int sum(int first, int second);

int main(){
    int first = 100, second = 200, third = 300, result;
    result = sum(first, second);
    cout << "Total value is : " << result << endl;
    cout << "Total value is : " << sum(second, third) << endl;
    return 0;
}

int sum(int first, int second){
    int result;
    result = first + second;
    return result;
}
