#include <stdio.h>

int main()
{
    int x = 1;
	int y = 0;
	int z = 0;
	
	scanf("%d", &y); fflush(stdin);
	for (int i = 1; i <= y; i++) 
	{
		printf("%d", x);
		x += i;
		if (i < y) {
			printf(" ");
		}
		else {
			printf("\n");
		}
	}

	getchar();
	return 0;
}