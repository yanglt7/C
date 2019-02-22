#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int num = rand()%100 + 1;
	
	int n; 
	printf("请输入游戏机会（次）：");
	scanf("%d", &n);
	
	int x;
	int cnt = 0;
	do {
		printf("请输入你猜的数字：\n");
		scanf("%d", &x);
		if ( x == -1 )
		{
			printf("Game Over\n");
			break;
		}
		
		cnt ++;
		
		if ( x > num )
		{
			printf("Too big!\n");
		} 
		else if ( x < num ) 
		{
			printf("Too small!\n");
		} 
		else {
			if ( cnt == 1 )
			{
				printf("Bingo!\n");	
			} else if ( cnt <= 3 )
			{
				printf("Lucky You!\n");
			} else if ( cnt <= n )
			{
				printf("Good Guess!\n");
			} else {
				printf("Game Over\n");
			} 
			break;
		}
	} while ( 1 );

	return 0;
}
