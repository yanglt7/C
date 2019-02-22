#include <stdio.h>

int main()
{
	int hour1, minute1;
	int hour2, minute2;
	
	printf("请分别输入*时*分(24小时制)，以空格隔开：");
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	
	int hour, minute;
	hour = ((hour1 * 60 + minute1) - (hour2 * 60 + minute2)) / 60;
	minute =  ((hour1 * 60 + minute1) - (hour2 * 60 + minute2)) % 60;
	printf("时间差是%d时%d分。", hour, minute);
	
	return 0;
}
