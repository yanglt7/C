//��#define������ϰ��

#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)
int main()
{
    int num;
    int again=1;
    printf("���ֵС�� 50 ������ֹ��\n");
    while(again)
    {
        printf("\n���������֣�");
        scanf("%d",&num);
        printf("�����ֵ�ƽ��Ϊ %d \n",SQ(num));
        if(num>=50)
            again=TRUE;
        else
            again=FALSE;
    }
    return 0;
}
