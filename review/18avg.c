#include <stdio.h>

int main()
{
	printf("������һϵ����������������� -1 ��ʾ����:\n");
	
	int num;
	int sum = 0;
	double avg;
	int n = -1;
	
	scanf("%d", &num);
	while ( num != -1 )
	{
		scanf("%d", &num);
		sum += num;
		n++;
	}
	
	avg = sum * 1.0 / n;
	printf("ƽ��ֵΪ��%f\n", avg);
	
	return 0;
}
