#include <stdio.h>
#include <string.h>
#include <ctype.h>

void enter(char word[37]){
	for(int i=0;i<20;i++){
		printf("\n");
	}
	printf("==========================================================\n");
	printf("Your current string : \"%s\"\n", word);
	printf("==========================================================\n\n");
				
}

int main(){
	char word[37];
	char word2[37];
	int choose;
	int length;
	int count=0;
	char searchWord[50];
	char *searching;
	char *split;

	for(int i=0;i<25;i++){
			printf("\n");
		}

	do{
		printf("Enter your first string [5..30]: ");
		gets(word);
	}while (strlen(word)<5 || strlen(word)>30);
	
	do{
		enter(word);
		printf("String Manipulator\n");
		printf("==================\n");
		printf("1. Input new string\n");
		printf("2. Reverse the string\n");
		printf("3. Uppercase the string\n");
		printf("4. Check alphabet in the string\n");
		printf("5. Checking word in the string\n");
		printf("6. Split the string\n");
		printf("7. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choose);fflush(stdin);
		switch(choose){
		case 1: enter(word);
				
				do{
				printf("Enter the new string [5..30]: ");
				gets(word2);
				length=strlen(word2);
				}while(length<5 || length>30);
			
				strcpy(word,word2);

				break;
		case 2: strrev(word);
				
				break;
		case 3: for(int i=0;i<strlen(word);i++){
					word[i]=toupper(word[i]);
				}

				break;
		case 4: enter(word);

				for(int i=0;i<strlen(word);i++){
					if(word[i]=='a' || word[i]=='e' || word[i]=='u' || word[i]=='i' || word[i]=='u' ||
						word[i]=='A' || word[i]=='E' || word[i]=='U' || word[i]=='I' || word[i]=='U' ){
							count++;
					}
				}
				printf("There are %d alphabet(s) in the string", count);
				getchar();

				break;
		case 5: enter(word);
				

				do{
					printf("What word do you want to search [3..10] ?");
					gets(searchWord);
				}while(strlen(searchWord)<3 || strlen(searchWord)>10);
				searching=strstr(word,searchWord);
				if(searching!=NULL){
					printf("%s found",searchWord);
				}
				else {
					printf("%s not found", searchWord);
				}
				getchar();

				break;
		case 6: enter(word);
				char temp[40];
				strcpy(temp,word);
				split=strtok(temp," ");
				int j=1;
				while(split!=NULL){
					printf("Word %d: %s\n", j, split);
					split=strtok(NULL," ");
					j++;
				}
				
				getchar();
				break;
		}
	}while(choose!=7);

	return 0;
}