#include <stdio.h>

int main()

{
	int amount;
	int price = 0;
	
	printf("�������Ԫ��");
	scanf("%d", &price);
	
	printf("������Ʊ��");
	scanf("%d", &amount);
	
	int change = amount - price;
	
	printf("����%dԪ\n", change); 
	
	return 0;
 } 
