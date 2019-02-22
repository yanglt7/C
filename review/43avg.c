#include <stdio.h>

int main()
{
	int cnt = 0;
	double sum = 0.0;
	int num[100];
	
	int x;	
	scanf("%d", &x);
	while ( x != -1 )
	{
		num[cnt] = x;
		sum += x;
		cnt++;
		scanf("%d", &x);
	}
	if ( cnt > 0 )
	{
		printf("%f\n", sum/cnt);
		int i;
		for ( i=0; i<cnt; i++ )
		{
			if ( num[i] > sum/cnt )
			{
				printf("%d\n", num[i]);
			}
		}
	}
	
	return 0;
}
