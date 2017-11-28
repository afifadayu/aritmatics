#include <stdio.h>

int main() {
	int n=0, b=0, i=0, j=0, k=0;

	scanf("%d %d",&n,&b); fflush(stdin);

	for (i=1, j=1; i<=n;i++) 
	{
		if (k==0) 
		{
			printf("%d",j);
			j=j+2;
			{
				if(j>=b)
				{
					k=1;
				}
			}
		}
		else if(k==1)
		{
			printf("%d", j);
			j=j-1;
		if(j==1){
				k=0;
		}
	}
		printf("\n");
	}
	getchar();
	return 0;
}