#include <stdio.h>

int main()
{
	int a, b, c;
	printf("请输入需要交换的两个数值a、b，以空格隔开："); 
	scanf("%d %d", &a, &b);
	
	c = a;
	a = b;
	b = c;
	
	printf("交换后，a=%d, b=%d", a, b);
	
	return 0;
 } 
