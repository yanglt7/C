//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�

#include <stdio.h>

int main(){
	int i;
	int j;
	int k; 
	int cnt=0;
	
	for (i=1;i<5;i++) {
		for (j=2;j<5;j++) {
			for (k=3;k<5;k++) {
				printf("%d%d%d\t", i, j, k);
				cnt++;
				if (cnt%3 == 0) {
				printf("\n");
				}
			}
		}
	}
	return 0;
}

