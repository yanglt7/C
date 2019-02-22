//Çó1+2!+3!+...+20!µÄºÍ¡£

#include <stdio.h>

int main()
{
	int i;
	long long sum = 0;
	long long n = 1;
	
	for (i=1;i<=20;i++) {
		n *= i;
		sum += n;
	}
	printf("%ld\n", sum);
	return 0;
}


