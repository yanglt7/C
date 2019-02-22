//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

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
