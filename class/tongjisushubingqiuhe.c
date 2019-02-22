#include <stdio.h>

int main()
{
	int m,n;
	int cnt = 0;
	int i;
	int sum=0;
	
	scanf("%d %d", &m, &n);
	if (m==1)
		m=2;
	
	for (i=m;i<=n;i++) {
		int isPrime = 1;
		int k;
		for (k=2;k<i;k++) {
			if (i%k==0) {
				isPrime = 0;
				break;
			}
		}
		//ÅÐ¶ÏiÊÇ·ñÊÇËØÊý
		if (isPrime) {
			cnt++;
			sum += i;
		} 
	}
	printf("%d %d", cnt, sum);
	return 0;
}
