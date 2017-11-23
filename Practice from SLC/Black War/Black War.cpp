#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void info(int army[6]){

	for(int i=0;i<17;i++){
		printf("\n");
	}
	printf("Your Army\n");
	printf("+++++++++++++++++++++++\n");
	printf("1.Knight Troops = %d\n", army[0]);
	printf("2.Archer Troops = %d\n", army[1]);
	printf("3.Balista Troops = %d\n", army[2]);
	printf("4.Warrior Troops = %d\n", army[3]);
	printf("5.Swordman Troops = %d\n\n", army[4]);
	
}

int main(){
	srand(time(NULL));
	int input;
	int army[6]={50, 200, 100, 100, 250};
	int number;
	int addedNumber;
	int adArmy[6];
	int rando[6];
	char troops[6][50]={
		{"Knight"},
		{"Archer"},
		{"Balista"},
		{"Warrior"},
		{"Swordman"}
	};


	do{
		for(int i=0;i<17;i++){
		printf("\n");
		}
		printf("      -=Black War=-\n");
		printf("--------------------------\n");
		printf("1.View number of Troops\n");
		printf("2.Add Troops\n");
		printf("3.Battle\n");
		printf("4.Exit\n\n");
		printf("Enter your choice[1..4] :");
		scanf("%d",&input);
			fflush(stdin);

		switch(input){
			case 1:
					info(army);
					printf("Press Enter to continue...");
					getchar();

					break;
			case 2:
					info(army);
					do{
						printf("Input the number of troops[1..5]: ");
						scanf("%d", &number);
							fflush(stdin);
					}while(number<0 || number>5);
					
					do{
						printf("Input the number of the %s to be added[0..%d]: ",troops[number-1],(1000-army[number-1]));
						scanf("%d",&addedNumber);
					}while(addedNumber<0 || addedNumber>(1000-army[number-1]));

					army[number-1]+=addedNumber;
				
					break;
			case 3: 
					info(army);
					do{
						printf("Input the number of Knight [0..%d]: ", army[0]);
						scanf("%d", &adArmy[0]);fflush(stdin);
					}while(adArmy[0]<0 || adArmy[0]>army[0]);

					do{
						printf("Input the number of Archer [0..%d]: ", army[1]);
						scanf("%d", &adArmy[1]);fflush(stdin);
					}while(adArmy[1]<0 || adArmy[1]>army[1]);

					do{
						printf("Input the number of Balista [0..%d]: ", army[2]);
						scanf("%d", &adArmy[2]);fflush(stdin);
					}while(adArmy[2]<0 || adArmy[2]>army[2]);

					do{
						printf("Input the number of Warrior [0..%d]: ", army[3]);
						scanf("%d", &adArmy[3]);fflush(stdin);
					}while(adArmy[3]<0 || adArmy[3]>army[3]);

					do{
						printf("Input the number of Swordman [0..%d]: ", army[4]);
						scanf("%d", &adArmy[4]);fflush(stdin);
					}while(adArmy[4]<0 || adArmy[4]>army[4]);
						
					rando[0]=rand()%adArmy[0];
					rando[1]=rand()%adArmy[1];
					rando[2]=rand()%adArmy[2];
					rando[3]=rand()%adArmy[3];
					rando[4]=rand()%adArmy[4];

					printf("\nThe number of Tropps who died in the battle : \n");
					printf("-------------------------------------------------\n\n");
					printf("Knight = %d\n",rando[0]);
					printf("Archer = %d\n",rando[1]);
					printf("Balista = %d\n",rando[2]);
					printf("Warrior = %d\n",rando[3]);
					printf("Swordman = %d\n\n",rando[4]);

					army[0]-=rando[0];
					army[1]-=rando[1];
					army[2]-=rando[2];
					army[3]-=rando[3];
					army[4]-=rando[4];

					printf("Press Enter to Continue...");
						getchar();
					
					break;
		}
	
	}while(input!=4);



	getchar();
	return 0;
}
