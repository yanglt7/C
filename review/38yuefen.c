#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d/%d", &a, &b);

	int a1 = a;
	int b1 = b;
	
	int t;
	do {
		t = a1%b1;
		a1 = b1;
		b1 = t;
	} while( b1 != 0 );
	
	printf("%d/%d = %d/%d\n", a, b, a/a1, b/a1);
	
	return 0;
 } 
