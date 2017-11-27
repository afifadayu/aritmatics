#include <stdio.h>

int main() {
	int i, j, n;

	scanf("%d",&n); fflush(stdin);

	for (i = 1; i <= n; i++) {
		for (j = i; j<n; j++) {
			printf(" "); // segitiga kiri
		}

		for (j = 1; j <= i; j++) {
			printf("*"); // segitiga kanan
		}
		printf("\n");
	}
	getchar();
	return 0;
}