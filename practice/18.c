//��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
//����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�

//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int n;
//	int cnt =1;
//	
//	printf("������a��n: \n");
//	scanf("%d %d", &a, &n);
//	
//	int s=0;
//	if (s != n) {
//		s += a;
//		cnt++;
//		printf("%d=%d", n,a);
//		a = a*10+a; 
//		printf("+%d",a);		
//	}
//	printf("\ncnt=%d", cnt);
//	
//	return 0;	
//}

#include <stdio.h>

int main()
{
	int a;
	int n;
	
	scanf("%d %d", &a, &n);
	
	int s;
	for (;n!=0;n--) {
		s += a;
		a = a*10 +a;			
	}
	printf("a+aa+...=%d\n", s);	
	
}
