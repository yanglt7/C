//��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�

#include <stdio.h>

//int main()
//{
//	int i;
//	int p;
//	int a[4] = {0,2,6,};
//	
//	scanf("%d", &a[3]);
//	for (i=0;i<3;i++) {
//		if (a[3]>a[i]) {
//			;
//		} else {
//			p = a[i];
//			a[i] = a[3];
//			a[3] = p;
//		}		
//	}
//	for (i=0;i<4;i++) {
//		printf("%d\n", a[i]);
//	}
//	
//	return 0;
//}

int main()
{
	int i,j;
	int p;
	int min;
	const int N = 10;
	int a[N];
	
	for (i=0;i<N;i++) {
		scanf("%d", &a[i]);
	} 
	
	for (i=0;i<N;i++) {
			min = a[i];
		for (j=i+1;j<N;j++) {
			if (a[i]>a[j]) {
				min = a[j];
			} 
			if (min != a[i]){
				p = a[i];
				a[i] = a[j];
				a[j] = p;
			}			
		}		
	}
	
	for (i=0;i<N;i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}
