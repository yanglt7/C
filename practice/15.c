//���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��

#include <stdio.h>

int main()
{
	int score;
	
	scanf("%d", &score);
	
	if (score>=90) {
		printf("A");
	} else if (score>=60) {
		printf("B");
	} else if (score<60) {
		printf("C");
	}
	
	return 0;
 } 
 
//#include<stdio.h>
//int main()
//{
//    int score;
//    char grade;
//    printf("����������� ");
//    scanf("%d",&score);
//    grade=(score>=90)?'A':((score>=60)?'B':'C');
//    printf("%c\n",grade);
//    return 0;
//}
