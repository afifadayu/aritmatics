#include<stdio.h>

int main()
{
	int N = 0;
	int M = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	
	scanf("%d %d", &N, &M); fflush(stdin);
	
	if ((N < 5) || (N > 100) || (N < M) || (M < 2))
	{
		printf("Error");
	}

	while (i < N)
    {
		if (j < M)
		{
			i++;
			j++;
			if (k)
			{
				printf(" ");
			}
			printf("%d",j);
			k = 1;
		}
		else
		{
			j = 0;
		}
	}
	printf("\n");

	getchar();
	return 0;
}