//���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������

#include <stdio.h>
 
int main()
{
    int i=5;
    void palin(int n);
    printf("������5���ַ�\40:\40");
    palin(i);
    printf("\n");
}
void palin(n)
int n;
{
    char next;
    if(n<=1) {
        next=getchar();
        printf("�෴˳��������\40:\40");
        putchar(next);
    } else {
        next=getchar();
        palin(n-1);
        putchar(next);
    }
}
