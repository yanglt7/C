//һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ��

#include <stdio.h>

int main()
{
	int n;
	int i,j;
	int p,q;
		
	scanf("%d", &n);
	
	i = n/10000;
	j = n%10;	 
	if (i == j) {
		p = (n/1000)%10;
		q = (n%100)/10;	
		if (p == q) {
			printf("%d�ǻ�����\n", n);
		}	
	} else {
		printf("%d���ǻ�����\n", n);
	}
	
}
