#include <stdio.h>
int main(void)
{
    //��ɫ���߱�ʾ����浵�ǻ����ϸ��浵�ݱ�����
    char name[20] = {0};
    int number;
    printf("hello, git!\n"); // �ύһ�κ��ٴ��޸��ļ�
    puts("what is your name: ");
    scanf("%s", name);
    printf("hello, %s", name);
    puts("input a number:");
    scanf("%d", &number);
    printf("$%d", number);
    return 0;
}