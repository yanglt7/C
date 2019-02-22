#include <stdio.h>

int main()
{
	int n;
	int cnt = 1;
	double sum = 0.0;
	int m;
	
	scanf("%d", &n);
	
	double fm = 1.0;
	int fz = 2;
	do {
		sum += fz/fm;

		m = fz;
		fz += fm;
		fm = m;

		cnt ++;
	} while (cnt<=n) ;
	printf("%f", sum);
	
	return 0;
 } 
