#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int x = rand()%100+1;
	int cnt = 0;
	int num;
	
	printf("���Ѿ������һ�� 1-100 ֮�������\n"); 
	
	do {
		printf("���һ������");
		scanf("%d", &num);
		cnt++;
		
		if ( num > x )
		{
			printf("��µ���̫���ˣ�\n");
		}
		else if ( num < x )
		{
			printf("��µ���̫С�ˣ�\n");
		}
	} while ( x != num );

	printf("��ϲ��¶��ˣ�һ������%d�Σ�\n", cnt); 

	return 0;
}
