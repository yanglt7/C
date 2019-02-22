#include <stdio.h>

int main()
{
	int x;
	
	scanf("%d", &x);
	
	if (x<0) {
		printf("fu\n");
		x = -x;
	}
	
	int mask = 1;	
	int t = x;
	while (t>9) {
		t/=10;
		mask*=10;
	}
	
	do {
		int d = x/mask;					
		switch (d) {		
			case 0: printf("ling "); break;
			case 1: printf("yi "); break;
			case 2: printf("er "); break;
			case 3: printf("san "); break;
			case 4: printf("si "); break;
		} 
		if (mask>9) printf(" ");
		x %= mask;
		mask /= 10;
	} while (mask>0);
	printf("\n");

	return 0;
}
