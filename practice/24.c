//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

#include <stdio.h>

int main()
{
	double a = 1;
	double b = 2;
	double sum = 0;
	double n;
	int t;
	
	int i;
	for (i=1;i<=20;i++) {
		n = b/a;
		sum += n;
		t = a;
		a = b;
		b += t;	
		printf("%d %f %f\n", i, n, sum);
	}
	printf("%f\n", sum);
	return 0;
}

