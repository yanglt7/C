/*��ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� ����
���磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���*/

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
