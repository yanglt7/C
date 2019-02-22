#include <stdio.h>

int main()
{
	double foot;
	double inch;
	printf("请输入身高的英尺和英寸，以空格隔开：");
	scanf("%lf %lf", &foot, &inch);
	
	double height;
	height = (foot + inch / 12) * 0.3048; 
	printf("身高是%f米。", height);
	
	return 0;
}
