#include <stdio.h>

int main() {
	int input;
	scanf("%d", &input); fflush(stdin);

	for (int i = 1; i <= input; i++) {
		for (int j = 1; j <= input; j++) {
			if (i == 1 || i == input || j == 1 || j == input)
				printf("*");
			else if (i == j || i + j - 1 == input)
				printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	getchar();
	return 0;
}