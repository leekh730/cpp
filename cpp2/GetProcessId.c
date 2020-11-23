#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    pid_t pid;
    if((pid = fork()) == -1) perror("fork failed");
    else if(pid != 0) //getpid() 자신 프로세스 ID 반환
        printf("PID is %Id, child process pid is %Id\n", getpid(), pid);
    else{
        while(1){ //getppid() 부로 프로세스 ID 반환
            printf("PID is %Id, parent process pid is %Id\n", getpid(), getppid());
            break;
        }
    }
    return 0;
}