//求一个3*3矩阵对角线元素之和

#include <stdio.h>

//int main()
//{
//	int i,j,k;
//	int a[3],b[3],c[3];
//
//	for (i=0;i<3;i++) {
//		scanf("%d %d %d", &a[i], &b[i], &c[i]);		
//		printf("%d %d %d\n", a[i],b[i],c[i]);
//	}
////	for (j=0;j<3;j++) {
////		scanf("%d", &b[j]);
////		printf("%d\n", b[j]);
////	}	
////	for (k=0;k<3;k++) {
////		scanf("%d", &c[k]);
////		printf("%d\n", c[k]);
////	}	
//	
//	printf("3*3矩阵对角线元素之和为%d\n",a[1]+b[1]+c[1]);	
//	
//	return 0;
// 
// } 

#include <stdio.h>

int main()
{
	int i,j;
	int sum = 0;
	int a[3][3];
	
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			scanf("%d", &a[i][j]);
//			printf("%d\n", a[i][j]);
			if (i==j) {			
			sum += a[i][j];
//			printf("%d\n",sum);
			} 
		}				
	}
	printf("3*3矩阵对角线元素之和为%d\n",sum);
	return 0;
}
