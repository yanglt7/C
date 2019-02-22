#include <stdio.h>

#define cube(x) ((x)*(x)*(x))

int main(int argc, char const *argv[])
{
	printf("%s:%d\n", __FILE__, __LINE__);
	printf("%s,%s\n", __DATE__, __TIME__);
	
	printf("%d\n", cube(5));
	
	return 0;
}
