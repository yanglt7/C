#include <stdio.h>

int main()
{
	int a, b;
	
	printf("请输入两个需要求平均值的数，以空格隔开：");
	scanf("%d %d", &a, &b);
	
	double avg;
	avg = (a + b) / 2.0;
	printf("%d和%d的平均值为：%f。", a, b, avg);
	
	return 0;
}
