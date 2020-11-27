#include <iostream>
using namespace std;

template <typename T> //typename is like data type
T const Max(T const first, T const second){ 
    /*
    답하는 datatype이 꼭 template일 필요는 없다. int, char 등 대답을 받기를 원하는 datatype을 넣어줘도 된다.
    물어볼 때 또한, template와 int 등 혼용하여 사용 가능하다. ex) char Max(T const first, char second){}
    */
    return first < second ? second : first; // if, else-if를 한 줄로 작성한 것
};

int main(){
    int int_first = 39;
    int int_second = 20;
    double double_first = 13.5;
    double double_second = 20.7;
    string str_first = "Hello";
    string str_second = "Left";
    bool bool_first = true; // 숫자 1
    bool bool_second = false; // null
    try{
        cout << "Max(int_first, int_second) : " << Max(int_first, int_second) << endl;
        cout << "Max(double_first, double_second) : " << Max(double_first, double_second) << endl;
        cout << "Max(str_first, str_second) : " << Max(str_first, str_second) << endl;
        cout << "Max(bool_first, bool_second) : " << Max(bool_first, bool_second) << endl; //true 값이 반환됨
        return -1;
    }catch(std::exception msg){
        cout << "Exception caught in main() " << msg.what() << endl;
        return -1;
    }
    return 0;
}
    /*
    string을 비교할 때는 첫번째 문자(대,소문자 상관없음)의 순서(순위)를 비교하며 동일할 때는 
    두번째 문자를 비교하면서 Max값을 반환한다.
    즉, 위 문자 H는 abcdefgh로 순서 8이며, L은 abcdefghijkl로 순서 12로 h보다 l이 더 크다는 것을 나타낸다.
    추가로, 두 문자열의 크기가 동일할 경우에는 length를 판단하여 max값을 반환한다.
    즉, str_first = "Hello", str_second = "Hellos"이면 Hellos가 반환된다.
    */
