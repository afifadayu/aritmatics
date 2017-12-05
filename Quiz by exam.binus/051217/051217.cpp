#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	char str[1000];
	char strRplc;
	char character;
	int i;

	gets(str);
	scanf("%c %c",&strRplc,&character); fflush(stdin);

	for(int i = 0; i < strlen(str); i++){
		if(str[i] == strRplc){
			str[i] = character;
		}
	}
	printf("%s",str);
	getchar();
	return 0;
}