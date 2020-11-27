#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>
using namespace std;

class Line{
    public: void setLength(double len); //public은 function
            double getLength(void);
            Line();
            Line(double len); //This is the constructor, 생성자
            ~Line(); //This is the destructor, 소멸자: declaration
    private: double length; //private는 변수
};
/*
생성자를 사용하는 이유는 객체 생성/소멸시에 초기화(initialize)를 해야되며 이때까지 따로 함수를 만들어서 진행했지만,
이렇게 생성자와 소멸자를 만들면 자동으로 객체를 만들 때 해당 생성자,소멸자 함수를 호출하여 메모리에 자동으로 올리고 내리게 한다.
생성자는 클래스의 인스턴스를 메모리에 할당할 때 초기화의 방식을 담당, 소멸자는 인스턴스가 더 이상 필요하지 않을 때 메모리에 존재하는 인스턴스를 해제를 위해 호출.
생성자는 매개변수를 가질수 있고, 반환값은 없다. class이름과 함수이름이 동일해야 한다.
소멸자는 매개변수를 갖지 못하고, 반환값도 없다. class이름과 함수이름이 동일하지만 앞에 ~(틸데)를 붙인다.
*/
Line::Line(void){cout << "Created" << endl;}
Line::Line(double len){cout << "Created, length = " << len << endl; length = len;}
Line::~Line(void){cout << "Object is being deleted" << endl;}
void Line::setLength(double len){length = len;} //생성자 정의
double Line::getLength(void){return length;} //소멸자 정의

int main(){
    Line firstline;
    firstline.setLength(6.0);
    cout << "Length of firstline : " << firstline.getLength() << endl;
    Line secondline;
    cout << "Length of secondline : " << secondline.getLength() << endl;
    firstline.~Line();
    secondline.~Line();
    return 0;
}

/*
생성자와 소멸자는 간단히 줄여서 객체를 생성하고 소멸시키는 것이다.
객체를 생성하기 위해서는 메모리를 할당해야 하며, 소멸시키기 위해서는 메모리를 반환해야 한다.

*/