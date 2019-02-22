#include <stdio.h>

int main()
{
	int a,n;
	scanf("%d %d", &a, &n);
	
	int sum = 0;
	
	int i;
	int t = 0;
	for (i=1;i<=n;i++) {		
		int t = a;
		sum += t;
		a = t*10 + 2; 
	}
	printf("%d", sum);
	
}
 
