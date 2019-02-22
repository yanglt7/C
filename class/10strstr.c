#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s[] = "hello";
	char *p = strchr(s, 'l');
	char c = *p;
	*p = '\0';
//	p = strchr(p+1, 'l');
	char *t = (char*)malloc(strlen(s)+1);
	strcpy(t,s);
	printf("%s\n", t);
	free(t);
	
	return 0;
}
