#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	
	int mask = 1;
	int d = num;
	while ( d > 9 )
	{
		d /= 10;
		mask *= 10;
	}
	
	while ( mask > 0 )
	{
		printf("%d", num/mask);
		if ( mask > 0 )
		{
			printf(" ");
		}
		num %= mask;
		mask /= 10;
	}
	printf("\n");
	
	return 0;
}
