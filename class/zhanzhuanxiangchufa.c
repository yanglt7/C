#include <stdio.h>

int main()
{
	int a,b;
	int t = 0;
	
	scanf("%d %d", &a,&b);
	
	while (b != 0){
		t = a%b;
		a = b;
		b = t;	
	}
	printf("���Լ��Ϊ%d\n",a); 

}
