#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	double a = 1;
	double b = 2;
	
	int i;
	double c;
	double sum = 0.0;
	for ( i=0; i<n; i++ )
	{
		sum += b / a;
		c = b;
		b += a;
		a = c;
	}
	printf("%.2f\n", sum);
	
	return 0;
}
