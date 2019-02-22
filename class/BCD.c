#include <stdio.h>

int main()
{
	int number;
	
	scanf("%d", &number);
	
	int a = number/16;
	int b = number%16;
	
	printf("%d", a*10 + 2 ); 
 } 
