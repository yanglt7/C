#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	int c;
	int a1 = a;
	int b1 = b;
	while ( b > 0 )
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d和%d的最大公约是%d.\n", a1, b1, a); 
	
	return 0;
}
