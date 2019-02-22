#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d %d", &m, &n);
	
	if ( m==1 )
	{
		m=2;
	}
	int i;
	int cnt = 0;
	int sum = 0;
	for ( i=m; i<=n; i++ )
	{
		int j;
		int isPrime = 1;
		for ( j=2; j < i; j++ )
		{
			if ( i%j == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if ( isPrime )
		{
			cnt++;
			sum += i;
		}
	}
	printf("素数的个数=%d，素数之和=%d.", cnt, sum);
	
	return 0;
}
