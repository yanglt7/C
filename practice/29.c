//��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�

#include <stdio.h>

int main()
{
	int n;
	int i = 0;
	int k;
	
	scanf("%d", &n);
	
	while (n != 0) {
		k = n%10;
		n /= 10;
		printf("%d", k);
		i++;
	}
	printf("\n");
	printf("%d\n", i);
}
