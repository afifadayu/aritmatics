#include <stdio.h>
#include <string.h>

void enter(){
	for(int i=0;i<30;i++){
		printf("\n");
	}
}

int main(){
	int option;
	char username[100];
	char password[100];
	char to[50], message[100];
	char To[50]={"unknown"};
	char Message[100]={"bla bla bla"};

	do{
		printf("\n\n                         Login First......\n\n");
		printf("%c Username: ", 1);
		gets(username);
		printf("%c Password: ", 1);
		gets(password);
	}while(strcmp(username,"bluejack")!=0 || strcmp(password,"bluejack")!=0);
	
	do{
		enter();
		printf("	                %c Simple Email Program %c\n", 1, 1);
		puts("                        ************************\n");
		puts("1. New Message");
		puts("2. Inbox");
		puts("3. Outbox");
		puts("4. Exit");
		printf("Enter your choice : ");
		scanf("%d",&option);fflush(stdin);
		switch(option){
		case 1: enter();
				printf("Compose\n");
				printf("*******\n\n");
				printf("From : bluejack\n");
				do{
					printf("\nTo [1..20]: ");
					gets(to);
				}while(strlen(to)==0 || strlen(to)>20);
				do{
					printf("\nMessage [1..50]: ");
					gets(message);
				}while(strlen(message)==0 || strlen(message)>50);
				printf("\n\nMessage sent successfully........");
				getchar();
				strcpy(To, to);
				strcpy(Message, message);
			
				break;
		case 2: enter();
				printf("Inbox\n");
				printf("*****\n\n");
				printf("From : %s\n\n", To);
				printf("To : bluejack\n\n");
				printf("Message : hi bluejack, %s\n\n", Message);
				printf("Press Enter to Continue...");
				getchar();
				break;
		case 3:	enter();
				printf("Outbox\n");
				printf("******\n\n");
				printf("From : bluejack\n\n");
				printf("To : %s\n\n", To);
				printf("Message : %s\n\n", Message);
				printf("Press Enter to Continue...");
				getchar();

				break;
		}
	}while(option!=4);


  return 0;
}