#include <stdio.h>

int main()
{
	int hour1, minute1;
	int hour2, minute2;
	
	printf("��ֱ�����*ʱ*��(24Сʱ��)���Կո������");
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	
	int hour, minute;
	hour = ((hour1 * 60 + minute1) - (hour2 * 60 + minute2)) / 60;
	minute =  ((hour1 * 60 + minute1) - (hour2 * 60 + minute2)) % 60;
	printf("ʱ�����%dʱ%d�֡�", hour, minute);
	
	return 0;
}
