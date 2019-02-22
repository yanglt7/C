#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i = 1;
	double sum = 0.0;
	
	for ( i = 1; i <= n; i++ )
	{
		if ( i%2 == 0 )
		{
			sum -= 1.0/i;
		} else {
			sum += 1.0/i;
		}
		
	}
	
	printf("f(%d)=%f\n", n, sum);

	return 0;
}
