#include <stdio.h>
int main(void)
{
    char name[20] = {0};
    printf("hello, git!\n"); // 提交一次后再次修改文件
    puts("what is your name: ");
    scanf("%s", name);
    printf("hello, %s", name);
    return 0;
}