#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	
	int a = num / 100;
	int b = num / 10 % 10;
	int c = num % 10;
	
	int num2 = c*100+b*10+a;
	
	printf("%d\n", num2);
	
	return 0;
}
