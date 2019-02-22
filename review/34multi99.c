#include <stdio.h>

int main()
{
	int n=9;
	//scanf("%d", &n);
	
	int i,j;
	for ( i=1; i<=n; i++ )
	{
		for ( j=1; j<=n; j++ )
		{
			if ( i >= j )
			{
				printf("%d*%d=%d\t", j, i, i*j);
				if ( i == j )
				{
					printf("\n");
				}
			}
		}
	}
	
	return 0;
}
