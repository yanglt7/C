#include <stdio.h>

int main()
{
	int a, n;
	scanf("%d %d", &a, &n);
	
	int sum = 0;
	int S = 0;
	int i;
	for ( i=1; i<=n; i++ )
	{
		sum += a;
		a *= 10;
		S += sum;
	}
	printf("%d\n", S);
	
	return 0;
}
