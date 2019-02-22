//将一个数组逆序输出。

#include <stdio.h> 

int main()
{
	int N = 3;
	int n[N];
	int i;
	int j = 0;
	
	for(i=0;i<N;i++) {
		scanf("%d", &n[i]);
	}	
	
	for (;N>0;N--) {
		j = N-1;
		printf("%d\n", n[j]);
	}    
	return 0;
}
