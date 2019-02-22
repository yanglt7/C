#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));//����һ�������
	int number = rand()%100+1;//ȡ������ĺ���λ����100���ټ�1
	int n;//�޶��µĴ�����������������ͽ�����Ϸ
	int cnt = 0;//������
	int inp;//��µ�����
	int finished = 0; //����ѭ�������� 
	
	scanf("%d", &n);

	do {
		scanf("%d", &inp);
		cnt++;
		if (inp<0) { //�����µ������Ǹ���������Ϸ������
			printf("Game Over!\n");
			finished = 1;
		} else if (inp>number) { 
			printf("Too big!\n");
		} else if (inp<number) {
			printf("Too small!\n");
		} else { 
			if (cnt==1) { //�����һ�β��У����ӡ��Bingo��
				printf("Bingo!\n");
			} else if (cnt<=3) { //�����������ô���С�ڻ����3�����ӡ��Lucky You!
				printf("Lucky You!\n");
			} else { //�����������ô�������3�����ӡ��Good Guess��
				printf("Good Guess!\n");
			}
			finished = 1;
		}
		if (cnt == n) { 
			if (finished == 0) { //��������޶�������û�в��У����ӡ��Game Over!����Ϸ������
				printf("Game Over!\n");
				finished = 1;
			}
		}
	} while (!finished);
	
	return 0;
}
