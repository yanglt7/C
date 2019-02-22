//判断一个数字是否为质数。

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int i;
	for (i=1;i<n;i++) {
		if (n%i == 0 && i != 1) {			
			printf("%d不是质数。\n", n);
			break;			
		} else if (i == (n/2)) {
			printf("%d是质数。\n", n);
			break;
		}		
	}
	return 0;
}
