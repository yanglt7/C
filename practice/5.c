//输入三个整数x,y,z，请把这三个数由小到大输出。

#include <stdio.h>

int main()
{
	int x,y,z;
	
	scanf("%d %d %d", &x, &y, &z);
	
if (x<y) {
	if (z<y) {
		if (x<z) {
			printf("%d %d %d", x,z,y);
		} else {
			printf("%d %d %d", z,x,y);
		}		
	} else {
		printf("%d %d %d", x,y,z);		
	}
} 
else {
	if(y<z) {
		if(x<z){
			printf("%d %d %d", y,x,z);	
		} else {
			printf("%d %d %d", y,z,x);	
		}
	} else {
		printf("%d %d %d", z,y,x);
	}					
}
	return 0;	
}


 
