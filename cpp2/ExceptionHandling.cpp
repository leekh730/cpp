#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>
using namespace std;

double division(int a, int b){
    int result = 0;
    try{
        if (b == 0){
            throw "Division by zero condition! ";
            }
        result = a / b; //Error Floationg point exception When Delete Throw
    }catch(const char *msg){ //exception of type const char*
        cout << "Exception caught : " << msg << endl;
    }catch(exception msg){cout << "caught in main() : " << msg.what() << endl;}
    return result;
}

int main(){
    int first = 50;
    int second = 0;
    try{
        double third = division(first, second);
        cout << "Exception caught in try : " << third << endl;
        return -1; // 어딘가에 log파일을 떨구어 error가 났다는 것을 보여준다.
    }catch(std::exception msg){
        cout << "Exception caught in main() " << msg.what() << endl;
        return -1;
    }
    return 0; // 결과값을 정상적으로 반환해준다.
}