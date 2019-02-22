#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int x = rand()%100+1;
	int cnt = 0;
	int num;
	
	printf("我已经想好了一个 1-100 之间的数。\n"); 
	
	do {
		printf("请猜一个数：");
		scanf("%d", &num);
		cnt++;
		
		if ( num > x )
		{
			printf("你猜的数太大了！\n");
		}
		else if ( num < x )
		{
			printf("你猜的数太小了！\n");
		}
	} while ( x != num );

	printf("恭喜你猜对了，一共猜了%d次！\n", cnt); 

	return 0;
}
