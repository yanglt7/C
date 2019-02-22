//输入某年某月某日，判断这一天是这一年的第几天？

#include <stdio.h>

int main()
{
	int date;
	int cnt=0;
	
	scanf("%d", &date);
	
	int y = date/10000;
	int m = date/100%10;
	int d = date%100;
	
	printf("%d %d %d\n",y,m,d);
	
	int mm[12] = {31,28,31,30,31,30,31,31,30,31,30,31,};
	
	if (y%4==0){
		if(m=2) {
			mm[1] = 29;
		} 		
	} 
	
	int i;
	for (i=0;i<m-1;i++) {
		cnt += mm[i];
	}
	cnt = cnt +d;	
	
	printf("这一天是%d年的第%d天。\n", y, cnt);
	
	return 0;
}
