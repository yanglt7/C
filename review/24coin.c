#include <stdio.h>

int main()
{
	int one = 1;
	int two = 2;
	int five = 5;
	int amount = 20;
	
	int i,j,k;
	int sum;
	int exit = 0;
	for ( i = 1; i < amount; i++ )
	{ 
		for ( j = 1; j < amount/2; j++ )
		{
			for ( k = 1; k < amount/5; k++ )
			{	
				sum = one*i + two*j + five*k;
				if ( sum == amount )
				{
					printf("������ %d �� 1 Ԫ�� %d �� 2Ԫ  �� %d �� 5 Ԫ�õ� %d Ԫ��\n", i, j ,k, amount);
					exit = 1;
					break;
				}
			}
			if ( exit )
			{
				break;
			}
		}
		if ( exit )
		{
			break;
		}
	}
	
	return 0;
}
