#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	
	int n = 1;
	x /= 10;
	while ( x > 0 ) 
	{
		n++;
		x /= 10;
	}
	
	printf("%d\n", n);
	
	return 0;
}
