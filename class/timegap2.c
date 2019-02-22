#include <stdio.h>

int main()
{
	int minute1=0;
	int minute2=0;
	
	scanf("%d %d", &minute1, &minute2);
	
	int a1 = minute1/100;
	int b1 = minute1%100;
	int c1 = a1*60 + b1;
	
	int time = c1 + minute2;		
	
	printf("%d", time/60*100+time%60); 
}
