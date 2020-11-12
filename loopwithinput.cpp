#include<iostream>

using namespace std;

int loopinput();

int main(){
    int x = loopinput();
    return 0;
}

int loopinput(){
    int first;
    int second;
    cout << "Input first : ";
    cin >> first;
    cout << "Input second : ";
    cin >> second;
    for(first; first < second; first = first + 1 ){
        cout << first << endl;
        }
}