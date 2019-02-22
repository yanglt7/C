#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int sum = 1;
	int i;
	for ( i=1; i<=n; i++ )
	{
		sum *= i;
	}
	
	printf("%dµÄ½×³ËÎª%d\n", n, sum);
	
	return 0; 
}
