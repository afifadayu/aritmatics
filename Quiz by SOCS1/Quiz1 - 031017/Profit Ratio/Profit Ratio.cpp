#include<stdio.h>

int main()
{
	int sp,bp; 
	0<bp<=sp<=10000;

	scanf("%d %d",&sp,&bp); fflush(stdin);
	
	float ratio;
	ratio = sp-bp;
	printf("%.2f%%\n",ratio/bp*100);
	
	getchar();
	return 0;
}