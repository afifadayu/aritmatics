#include <stdio.h>

int main() {

	int input, input2[100], hasil, i, hasil2;
	hasil2 = 0;
	scanf("%d", &input); fflush(stdin);

	for (i = 0; i<input; i++) {
		scanf("%d", &input2[i]); getchar();
	}

	for (i = 1; i<input; i++) {
		{
			if (input2[i] >= input2[i - 1])
				hasil = input2[i] - input2[i - 1];
			else 
				hasil = input2[i - 1] - input2[i];
		}
		if (hasil>hasil2)
			hasil2 = hasil;
	}

	printf("%d\n", hasil2);

	getchar();
	return 0;
}