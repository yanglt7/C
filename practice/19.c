//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6=1��2��3.����ҳ�1000���ڵ�����������

#include <stdio.h>

int main()
{
	const int N = 1000;
	int i,j,k,n,sum;
	int a[256];
		
	for (i=1;i<=N;i++) {
	    sum = a[0] = 1;
	    k = 0;
		for (j=2;j<=(i/2);j++) {
			if (i%j==0) {
				sum += j; 
				a[++k] = j;
			}
		}
		
		if (sum == i) {
			printf("%d=%d", i,a[0]);
			for (n=1;n<k;n++){
				printf("+%d", a[n]);
			}
			printf("\n");
		} 
	}
	return 0; 
}
