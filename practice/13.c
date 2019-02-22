/*打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。*/

#include <stdio.h>

int main()
{
	int num;
	int x,a,b,c;
	int cnt=0;
		
	for (num=100;num<1000;num++) {
		
		a = num/100;
		b = num/10%10;
		c = num%10;	

		x = a*a*a + b*b*b + c*c*c; 
		
		if (x==num) {
			cnt++;
			printf("%d ", x);
			if (cnt%3 == 0) {
			printf("\n");
			}
		}				
	}
	
	return 0;
}
