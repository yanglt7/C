#include <stdio.h>

int main()
{
	int x;
	printf("�����뱾��");
	scanf("%d", &x);
	
	double interest;
	
	interest = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);
	printf("��Ϣ���Ϊ%f��", interest);
	
	return 0;
}
