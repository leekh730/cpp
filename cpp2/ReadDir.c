#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    DIR *dir;
    struct dirent *entry;
    if((dir = opendir(argv[1]))==NULL){
        fprintf(stderr, "can't open '%s'\n", argv[1]);
        exit(1);
    }
    while ((entry = readdir(dir)) != NULL){
        printf("%s\n", entry->d_name);
    }
    closedir(dir);
    return 0;
}

/*
c++ ReadDir.c -> compile
./ReadDir.c를 하게 되면 a.out으로 출력되게 되고, ./ReadDir.c -o ReadDir -o는 옵션을 의미, ReadDir은 naming을 한 것
./ReadDir / 을 치게되면 /는 root를 나타내기 때문에 root에서 보여지는 file들이 다 나열되고, ./ReadDir . 을 하게 되면 현재 위치에 존재하는 file들을 보여주게됨
터미널 창에서 ls 기능을 코드로 짜면 위와 같다.
*/