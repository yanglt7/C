#include <stdio.h>

int main()
{
	int a,b;
	int min;
	
	scanf("%d %d", &a,&b);
	
	if (a<b) {
		min = a;
	} else {
		min = b;
	}
	
	int ret = 0;
	int i;
	for(i=1;i<=min;i++) {
		if (a%i == 0) {
			if (b%i == 0){
				ret = i;
//				printf("ret=%d,i=%d\n",ret,i);
			}
		}
	}
	printf("%d��%d�����Լ��Ϊ%d\n",a,b,ret);
}
