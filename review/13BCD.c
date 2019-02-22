#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	
	int a = num / 16;
	int b = num % 16;
	int BCD = a * 10 + b;
	
	printf("%d", BCD);
}
