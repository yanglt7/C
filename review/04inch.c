#include <stdio.h>

int main()
{
	double foot;
	double inch;
	printf("��������ߵ�Ӣ�ߺ�Ӣ�磬�Կո������");
	scanf("%lf %lf", &foot, &inch);
	
	double height;
	height = (foot + inch / 12) * 0.3048; 
	printf("�����%f�ס�", height);
	
	return 0;
}
