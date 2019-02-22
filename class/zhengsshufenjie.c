#include <stdio.h>

int main()
{
//	int x;
//	int t;
//	scanf("%d", &x);
//	do
//	{
//		int d = x%10;
//		t = t*10+d;
//		
//		x /= 10;
//	} while(x>0);
//	printf("%d\n",t);
//	x = t;

//	do
//	{
//		int d = x%10;
//		printf("%d ", d);
//		if (x>9) {
//			printf(" ");
//		} 
//		x /= 10;
//	} while (x>0);
//	printf("\n");

	int x;
	int mask=1;
	
	scanf("%d", &x);
	
//	int cnt = 0;
	int t = x;
	while (t>9) {
		t /= 10;
		mask *= 10;
	} 
	printf("mask = %d\n", mask);
	
	do
	{
		int d = x / mask;
		printf("%d", d);
		if (mask>9) {
			printf(" ");
		} 
		x %= mask;
		mask /= 10;		
	}while (mask>0);
	
	printf("\n");

	return 0;
 } 
