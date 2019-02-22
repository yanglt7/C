#include <stdio.h>

int main()
{
	printf("请输入一系列正整数，最后输入 -1 表示结束:\n");
	
	int num;
	int sum = 0;
	double avg;
	int n = -1;
	
	scanf("%d", &num);
	while ( num != -1 )
	{
		scanf("%d", &num);
		sum += num;
		n++;
	}
	
	avg = sum * 1.0 / n;
	printf("平均值为：%f\n", avg);
	
	return 0;
}
