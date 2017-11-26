#include <stdio.h>

int main()
{

    int IB= 0, R= 0, Y=0, i=0;

    double total=0;

    scanf("%d %d %d",&IB,&R,&Y); fflush(stdin);

    total=IB;

    for(i=1; i<=Y; i++)
	{
        total = total+(total*R/100);
	}

    IB = total;

    printf("%d\n", IB);

	getchar();
	return 0;
}