#include <stdio.h>

int main(){
	int i,j;
	int n;

	scanf("%d", &n);
	
	i=1;
	while (i<=n) {
		j=1;
		while (j<=i) {
			printf("%d*%d=%d", j, i, i*j);
			if (i*j>9) {
				printf("  ");
			} else {
				printf("   ");
			}
			j++;			
		}
		printf("\n");
		i++;
	}
	
	return 0;
	
} 
