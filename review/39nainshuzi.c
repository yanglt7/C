#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	
	if ( num < 0 )
	{
		num = -num;
		printf("fu ");
	}
	
	int mask = 1;
	int n = num;
	while ( n > 9 )
	{
		n /= 10;
		mask *= 10;
	}
	
	while ( mask > 0 )
	{
		n = num / mask;
		switch ( n )
		{
			case 0:
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
		}
		if ( mask > 9 )
		{
			printf(" ");
		}
		num %= mask;
		mask /= 10;
	}
	printf("\n");

	return 0;
}
