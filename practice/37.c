//对10个数进行排序。

#include <stdio.h>

int main()
{
	const int N = 10;
	int n[N];
	int i,j,p;
	
	for (i=0;i<N;i++) {
		scanf("%d", &n[i]);
	}
	
	for (i=0;i<N;i++) {
		int min = n[i];
		for (j=i+1;j<N;j++) {
			if (n[i]>n[j]) {
				min = n[j];
			}			
			if(min != n[i]) {
				p = n[i];
				n[i] = n[j];
				n[j] = p;
			}
		}
	}
		
	printf("数字的排序结果是\n");
	for (i=0;i<N;i++) {
		printf("%d ", n[i]);
	}
	
	return 0;
 } 
