//���õݹ鷽����5!��
//�ݹ鹫ʽ��fn=fn_1*4!

#include <stdio.h>
 
int main()
{
    int i;
    int fact(int);
    for(i=0;i<6;i++){
        printf("%d!=%d\n",i,fact(i));
    }
}
int fact(int j)
{
    int sum;
    if(j==0){
        sum=1;
    } else {
        sum=j*fact(j-1);
    }
    return sum;
}
