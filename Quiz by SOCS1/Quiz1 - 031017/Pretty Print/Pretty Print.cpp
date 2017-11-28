#include<stdio.h>

int main()
{
	char trickyPrint[1000];
	scanf("%[^\n]",&trickyPrint); fflush(stdin);

	printf("printf(\"%%s\\n""\", \"""%s""\");\n",trickyPrint);
	
	getchar();
	return 0;
}