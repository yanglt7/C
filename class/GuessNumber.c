#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;

	int n;
	int cnt = 0;
	int inp;
	int finished = 0; 
	
	scanf("%d", &n);
	
	do {
		scanf("%d", &inp);
		cnt++;
		if (inp<0) {
			printf("Game Over!\n");
			finished = 1;
		} else if (inp>number) {
			printf("Too big!\n");
		} else if (inp<number) {
			printf("Too small!\n");
		} else {
			if (cnt==1) {
				printf("Bingo!\n");
			} else if (cnt<=3) {
				printf("Lucky You!\n");
			} else {
				printf("Good Guess!\n");
			}
			finished = 1;
		}
		if (cnt == n) {
			if (finished == 0) {
				printf("Game Over!\n");
				finished = 1;
			}
		}
	} while (!finished);
	return 0;
}
