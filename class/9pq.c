#include <stdio.h>

int main(void)
{
	char ac[] = {0,1,2,3,4,5,6};
	char *p = ac;
	char *p1 = &ac[5]; 
	printf("p =%p\n", p);
	printf("p+1=%p\n", p+1);
	printf("p1-p=%d\n",p1-p);
//	*p -> ac[0];
//	*(p+1) -> ac[1];
// *(p+n) -> ac[n]£» 
	printf("*(p+1)=%p\n", *(p+1));

	int ai[] = {0,1,2,3,4,5,6};
	int *q = ai;
	int *q1 = &ai[6];
	printf("q =%p\n", q);
	printf("q1=%p\n", q1);
	printf("q+1=%p\n", q+1);
	printf("*(q+1)=%p\n", *(q+1));
	printf("q1-q=%d\n", q1-q);
int k= 1, j =1;
k++;
++j;
printf("%d %d\n",k,k++);
printf("%d %d\n",j,++j);
}
