#include <iostream>
using namespace std;

int main(){
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