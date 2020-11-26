#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>
// using namespace std;

class Box{
    public:
        double length;
        void setWidth(double param_width){width = param_width;}
        double getWidth(void);
        void setLength(double length){this -> length = length;};
    private:
        double width;
};

double Box::getWidth(void){return width;} //Scope resolution operator(::)

int main(){
    Box BoxSecond; //Declare BoxSecond of type Box
    BoxSecond.setWidth(10.0);
    //BoxSecond.length = 12.0;
    // volume = BoxSecond.width*BoxSecond.length; // private에 정의된 width에 접근할 수 없기 때문에 error가 남
    //long double volume = BoxSecond.getWidth()*BoxSecond.length; //long double을 주면 표현할 수 있는 숫자의 범위가 커짐
    double volume = BoxSecond.getWidth()*BoxSecond.length;
    std::cout << "Volume of BoxSecond : " << volume << '\n';
    return 0;
}