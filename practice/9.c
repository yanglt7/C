//���9*9�ھ���

#include <stdio.h>

int main()
{
	int i;
	int j;
	
	i = 1;
	while (i<=9) {
		j = 1;
		while (j<=i) {	
			printf("%d*%d=%d\t", i, j, i*j);
			j++;
		}		
		i++;
		if(j==i) {
			printf("\n");
		}		
	}
	
	return 0;
}
