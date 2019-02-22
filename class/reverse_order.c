#include <stdio.h>

int main()
{
	int amount;
		
	scanf("%d", &amount) ;
	
	int a = amount/100;
	int b = amount/10 - 10;
	int c = amount%10;
	
	printf("%d",c*100+b*10+a);
 } 
