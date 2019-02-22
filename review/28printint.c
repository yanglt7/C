#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	
	int t=0;
	while ( num != 0 )
	{
		t =  num%10 + t*10;
		num /= 10;
	}
	
	int num2 = t;
	while ( num2 != 0 )
	{
		printf("%d", num2%10);
		if ( num2 >=10 )
		{
			printf(" ");
		}
		num2 /= 10;
	}
	printf("\n");
	
	return 0;
}
