#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(){
	/*	
			*
		   **
		  ***
		 ****
		*****
	*/
	int inputInt;
	char inputChar;
	
	printf("+=+=+ TRIANGLE +=+=+\n\n");
	printf("input number     : ");
	scanf("%d",&inputInt); fflush(stdin);
	printf("input character  : ");
	scanf("%c", &inputChar); fflush(stdin);
	printf("\n\n");
	printf("+=+=+ THE TRIANGLE by your input +=+=+\n\n");
	for(int i=1; i<=inputInt; i++){
		for(int j = i; j<inputInt; j++){
			printf(" ");
		}
		for(int j=1; j<=i; j++){
			printf("%c",inputChar);
		}
		printf("\n");
	}
	getchar();
	return 0;
}