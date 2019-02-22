#include <stdio.h>

int main()
{
	int age = 0;
	double salary = 4000;
	
	scanf("%d", &age);
	if (age > 60) {
		salary = salary * 1.2;
		printf("%f\n", salary);
	}
	return 0;
}
