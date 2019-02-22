#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));//产生一个随机数
	int number = rand()%100+1;//取随机数的后两位（余100）再加1
	int n;//限定猜的次数，超过这个次数就结束游戏
	int cnt = 0;//计数器
	int inp;//你猜的数字
	int finished = 0; //跳出循环的条件 
	
	scanf("%d", &n);

	do {
		scanf("%d", &inp);
		cnt++;
		if (inp<0) { //如果你猜的数字是负数，则游戏结束。
			printf("Game Over!\n");
			finished = 1;
		} else if (inp>number) { 
			printf("Too big!\n");
		} else if (inp<number) {
			printf("Too small!\n");
		} else { 
			if (cnt==1) { //如果你一次猜中，则打印出Bingo！
				printf("Bingo!\n");
			} else if (cnt<=3) { //如果你猜中所用次数小于或等于3，则打印出Lucky You!
				printf("Lucky You!\n");
			} else { //如果你猜中所用次数大于3，则打印出Good Guess！
				printf("Good Guess!\n");
			}
			finished = 1;
		}
		if (cnt == n) { 
			if (finished == 0) { //如果到了限定次数还没有猜中，则打印出Game Over!，游戏结束。
				printf("Game Over!\n");
				finished = 1;
			}
		}
	} while (!finished);
	
	return 0;
}
