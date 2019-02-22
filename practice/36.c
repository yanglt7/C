//求100之内的素数。

#include <stdio.h>

int main()
{
	int n;
	int i;
	int cnt=0;
	
	for (n=2;n<=100;n++) {
		for (i=1;i<=(n/2);i++) { 
			if (n%i==0 && i!=1) {				
				break;
			} else if (i==(n/2)) {
				printf("%d\t", n);
				cnt++;
			}				
		}
		
		if (cnt%5==0) {
			printf("\n");
		}		
	}
	return 0;
}




