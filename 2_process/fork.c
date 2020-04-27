#include <stdio.h>

// pid_t fork(void); 包含在unistd.h头文件中。不要任何参数，直接创建一个新进程。
// void exit(int status); 存在于stdlib.h头文件中。
// pid_t wait(int* stat_loc); 存在于sys/wait.h

int main() {
    printf("%s\n", "我是汪洋");

    return 0;
}