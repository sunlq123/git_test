#include <stdio.h>
int main(void)
{
    char name[20] = {0};
    printf("hello, git!\n"); // �ύһ�κ��ٴ��޸��ļ�
    puts("what is your name: ");
    scanf("%s", name);
    printf("hello, %s", name);
    return 0;
}