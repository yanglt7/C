#include <stdio.h>

int main()
{
	int n=3;
	//scanf("%d", &n);
	
	int i;
	int min = 1;
	for ( i=1; i<n; i++ )
	{
		min *= 10;
	}

	for ( i=min; i < min*10; i++ )
	{
		int t = i;
		int sum = 0;
		while ( t > 0 )
		{
			int d = t%10;
			t /= 10;
			int j;
			int p = d;
			for ( j=1; j<n; j++ )
			{
				p *= d; 
			}
			sum += p;
		}
		if ( sum == i )
		{
			printf("%d\n", sum);
		}
	}
	
	return 0;
}
