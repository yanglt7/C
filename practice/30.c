//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

#include <stdio.h>

int main()
{
	int n;
	int i,j;
	int p,q;
		
	scanf("%d", &n);
	
	i = n/10000;
	j = n%10;	 
	if (i == j) {
		p = (n/1000)%10;
		q = (n%100)/10;	
		if (p == q) {
			printf("%d是回文数\n", n);
		}	
	} else {
		printf("%d不是回文数\n", n);
	}
	
}
