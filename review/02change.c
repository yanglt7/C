#include <stdio.h>

int main()
{
	int price = 0;
	int amount = 100;
	
	printf("�������Ԫ��");
	scanf("%d", &price);
	
	printf("������Ʊ�棨Ԫ��");
	scanf("%d", &amount);
	
	int change = amount - price;
	
	printf("����%dԪ\n", change);
	
	return 0;
}
