#include <stdio.h>

int main()
{
	int x;
	int d;
	int t=0;
	
	scanf("%d", &x);
	do
	{
		int d = x%10;
		t = t*10+d;
		x /= 10;		
	} while (x>0);
	printf("x=%d,t=%d\n",x,t);
	x=t;
	do
	{
		int d = x%10;
		printf("%d", d);
		if (x>9) {
			printf(" ");
		} 
		x /= 10;
	} while (x>0);
	printf("\n");
}
