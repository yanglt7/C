#include <stdio.h>
#include <stdlib.h>

//int main(void)
//{
//	void *p;
//	int cnt = 0;
//	while ((p=malloc(100*1024*1024))) {
//		cnt++; 		 
//	}
//	printf("������%d00MB�Ŀռ�\n", cnt) ;
//	 
//	free(p);
//	return 0;	
// } 

//{
//	int number;
//	int* a;
//	int i;
//	printf("����������");
//	scanf("%d", &number);
////	int a[number]; 
//	a = (int*)malloc(number*sizeof(int));	
//	for(i=0;i<number;i++){
//		scanf("%d", &a[i]);
//	}
//	for(i=number-1;i>=0;i--){
//		printf("%d", a[i]); 
//	}
//	free(a);
//	
//	return 0; 
// } 

int main(void)
{
	int i;
	void *p=0;
//	p = malloc(100*1024*1024);
//	p++;
	p = &i;	 
	free(p);
	
	return 0;	
 } 

