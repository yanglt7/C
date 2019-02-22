#include <stdio.h>

int main()
{
	int time, minute;
	scanf("%d %d", &time, &minute);
	
	int h1 = time / 100;
	int m1 = time % 100;
	int t1 = h1 * 60 + m1;
	int d = t1 + minute;
	
	int h2 = d / 60;
	int m2 = d % 60;
	int t2 = h2 * 100 + m2;
	
	printf("%d\n", t2);
	
	return 0;
}
