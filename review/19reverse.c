#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	int a;

	while ( x > 0 )
	{
		a = x % 10;
		printf("%d", a);
		x /= 10;
	}
	
	return 0;
}
