//�ж�101��200֮���������

#include <stdio.h>

int main()
{
	int cnt = 0;
	int x;
	
	for (x=101;x<200;x++) {
		int i;
		int isPrime = 1;
		for (i=2;i<x;i++) {
			if (x%i==0) {
			isPrime = 0;		
			break;		 
			}
		}		
		if (isPrime ==1 ) {
			cnt++;
			printf("%d ", x);
			if (cnt%5==0) {
				printf("\n");
			}
		}
	}

	return 0;
}
