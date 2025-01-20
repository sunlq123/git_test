#include <stdio.h>
int main(void)
{
    //蓝色的线表示这个存档是基于上个存档演变来的
    char name[20] = {0};
    int one = 1;
    printf("hello, git!\n"); // 提交一次后再次修改文件
    puts("what is your name: ");
    scanf("%s", name);
    printf("hello, %s", name);
    return 0;
}