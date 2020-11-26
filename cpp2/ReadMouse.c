#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv){
    int fd, bytes;
    unsigned char data[3];
    fd = open("/dev/input/mice", O_RDWR); //open mouse
    if(fd==-1){
        return -1;
    }

    signed char x,y;
    while(1){
        bytes = read(fd, data, sizeof(data)); //Read Mouse
        if(bytes > 0){
            x = data[1];
            y = data[2];
            printf("x=%d, y=%d \n", x, y);
        }
    }

    return 0;
}
//실행은 sudo ./ReadMouse를 하고 비번 입력을 하면 실행됨!

/*
c++ ReadMouse.c -> compile
./ReadMouse.c를 하게 되면 a.out으로 출력되게 되고, ./ReadMouse.c -o ReadMouse -o는 옵션을 의미, ReadMouse naming을 한 것
./ReadMouse / 을 치게되면 /는 root를 나타내기 때문에 root에서 보여지는 file들이 다 나열되고, ./ReadMouse . 을 하게 되면 현재 위치에 존재하는 file들을 보여주게됨
터미널 창에서 ls 기능을 코드로 짜면 위와 같다.
*/