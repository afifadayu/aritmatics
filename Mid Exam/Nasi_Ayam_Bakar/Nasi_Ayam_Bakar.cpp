#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(){
	/*	
	Input:
	nasi ayam bakar
	Output:
	Nasi_Ayam_Bakar
	*/
	char inputStr[100];

	printf("+=+=+ nasi ayam bakar +=+=+\n\n");
	printf(" input string : ");
	gets(inputStr); fflush(stdin);
	printf("\n\n");
	printf("+=+=+ Nasi_Ayam_Bakar +=+=+\n\n");
	for(int i=0;i<strlen(inputStr);i++){
		if(inputStr[i] == ' '){
			inputStr[i] = '_';
			inputStr[i+1] = toupper(inputStr[i+1]);
		}
		inputStr[0] = toupper(inputStr[0]);
	}
	printf(" output string : %s",inputStr);
	getchar();
	return 0;
}