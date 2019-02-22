#include <stdio.h>

int main()
{
	int x;
	printf("请输入本金：");
	scanf("%d", &x);
	
	double interest;
	
	interest = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);
	printf("本息金额为%f。", interest);
	
	return 0;
}
