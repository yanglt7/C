#include <stdio.h>

int main()
{
	int a, b;
	
	printf("������������Ҫ��ƽ��ֵ�������Կո������");
	scanf("%d %d", &a, &b);
	
	double avg;
	avg = (a + b) / 2.0;
	printf("%d��%d��ƽ��ֵΪ��%f��", a, b, avg);
	
	return 0;
}
