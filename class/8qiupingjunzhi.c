#include <stdio.h>

int main()
{
	int cnt = 0;
	int x;
	int number[100];
	double sum = 0.0;
	
	 
	scanf("%d\n",&x);
	
	while (x != -1) {
		number [cnt] = x;
		sum += x;
		cnt ++;
		scanf("%d", &x);
	} 

	if (cnt>0) {
		printf("%f\n", sum/cnt);
		int i;
		for (i=0;i<cnt;i++) {		
			if(number [i] > sum/cnt)
				printf("%d\n",number [i]); 
		}
	}

	 return 0;
 } 
