//��������������m��n���������Լ������С��������

#include <stdio.h>

int main()
{
	int a,b,t,r;
	
	scanf("%d %d", &a, &b);
	
	if (a<b) {
		t = b;
		b = a;
		a = t;
	}
	
	r = a%b;
	int n = a*b;
	if (r != 0) {
		a = b;
		b = r;		
		r = a%b;
	}
	printf("���Լ����%d, ��С��������%d\n", b, n/b);
	return 0; 
}
