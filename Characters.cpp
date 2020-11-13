#include <iostream>
using namespace std;

int character();

int main(){
    int x = character();
    return 0;
}

int character(){
    char ch;
    cin >> ch;
    if(ch == 'N'){
        cout << "Press" << ch << "Character!" << endl;
    }
    cin >> ch;
    cout << int(ch) << "Press" << ch << "Character!" << endl;
    cin >> ch;
    cout << int(ch) << "Press" << ch << "Character!" << endl;
    return 0;
}