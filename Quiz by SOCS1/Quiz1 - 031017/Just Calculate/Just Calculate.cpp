#include<stdio.h>

int main()
{
	long int x;
	-100000000 <= x <= 100000000;
	scanf("%ld",&x); fflush(stdin);

	long int y;
	y = x*x+3*x+6;
	printf("%ld\n",y);

	getchar();
	return 0;
}