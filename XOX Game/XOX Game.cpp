#include <stdio.h>
#include <string.h>
int main(){
	int flag=0;
	int xPlayer, yPlayer;
	int x,y;
	int turn=1;
	char answer;
	char table[20][20] = {
		{"  XO Table"},
		{"=-=-=-=-=-=-"},
		{""},
		{"    1 2 3"},
		{""},
		{"  1 - - -"},
		{""},
		{"  2 - - -"},
		{""},
		{"  3 - - -"}
	};
	
	
	do{
		for(int i=0;i<12;i++){
		printf("\n");
		}
		for(int i=0;i<10;i++){
			for(int j=0;j<19;j++){
				printf("%c",table[i][j]);
			}printf("\n");
		}
		
		if(turn%2!=0){
			printf("\nPlayer X Turn\n");
		}
		if(turn%2==0){
			printf("\nPlayer O Turn\n");
		}
		printf("+-+-+-+-+-+-+-+-\n\n");
		do{
			do{
				printf("X Coordinate [1..3]: ");
				scanf("%d",&xPlayer);fflush(stdin);
			}while(xPlayer<0 || xPlayer>3);

			do{
				printf("Y Coordinate [1..3]: ");
				scanf("%d",&yPlayer);fflush(stdin);
			}while(yPlayer<0 || yPlayer>3);
	
			if(xPlayer==1){
				x=4;}
			else if(xPlayer==2){
				x=6;}
			else if(xPlayer==3){
				x=8;}
			if(yPlayer==1){
				y=5;}
			else if(yPlayer==2){
				y=7;}
			else if(yPlayer==3){
				y=9;}
			if(table[y][x]=='X' || table[y][x]=='O'){
				printf("\nPosition has been filled\n\n");
			}

		}while(table[y][x]=='X' || table[y][x]=='O');
	
		if(turn%2!=0){
			table[y][x]='X';
		}
		if(turn%2==0){
			table[y][x]='O';
		}
		turn++;

		if(table[5][4]=='X' && table[5][6]=='X' && table[5][8]=='X')flag=1;
		if(table[7][4]=='X' && table[7][6]=='X' && table[7][8]=='X')flag=1;
		if(table[9][4]=='X' && table[9][6]=='X' && table[9][8]=='X')flag=1;
		if(table[5][4]=='X' && table[7][4]=='X' && table[9][4]=='X')flag=1;
		if(table[5][6]=='X' && table[7][6]=='X' && table[9][6]=='X')flag=1;
		if(table[5][8]=='X' && table[7][8]=='X' && table[9][8]=='X')flag=1;
		if(table[5][4]=='X' && table[7][6]=='X' && table[9][8]=='X')flag=1;
		if(table[9][4]=='X' && table[7][6]=='X' && table[5][8]=='X')flag=1;
		
		if(table[5][4]=='O' && table[5][6]=='O' && table[5][8]=='O')flag=2;
		if(table[7][4]=='O' && table[7][6]=='O' && table[7][8]=='O')flag=2;
		if(table[9][4]=='O' && table[9][6]=='O' && table[9][8]=='O')flag=2;
		if(table[5][4]=='O' && table[7][4]=='O' && table[9][4]=='O')flag=2;
		if(table[5][6]=='O' && table[7][6]=='O' && table[9][6]=='O')flag=2;
		if(table[5][8]=='O' && table[7][8]=='O' && table[9][8]=='O')flag=2;
		if(table[5][4]=='O' && table[7][6]=='O' && table[9][8]=='O')flag=2;
		if(table[9][4]=='O' && table[7][6]=='O' && table[5][8]=='O')flag=2;

		if(flag==1){
			printf("\n\n\nGame Over^^\n\n");
			printf("Congratulations, player \"X\" win!!\n\n\n\n\n\n");
			do{
				printf("You want to repeat this game [y/n]: ");
				scanf("%c",&answer);fflush(stdin);
			}while(answer!='y' && answer!='n');
		}
		if(flag==2){
			printf("\n\n\nGame Over^^\n\n");
			printf("Congratulations, player \"O\" win!!\n\n\n\n\n\n");
			do{
				printf("You want to repeat this game [y/n]: ");
				scanf("%c",&answer);fflush(stdin);
			}while(answer!='y' && answer!='n');
		}
		if(turn==10){
			printf("\n\n\nGame Over^^\n\n");
			printf("Game is Draw..\n\n\n\n\n\n");
			do{
				printf("You want to repeat this game [y/n]: ");
				scanf("%c",&answer);fflush(stdin);
			}while(answer!='y' && answer!='n');
		}
		if(answer=='y'){
			table[5][4]='-';
			table[7][4]='-';
			table[9][4]='-';
			table[5][6]='-';
			table[7][6]='-';
			table[9][6]='-';
			table[5][8]='-';
			table[7][8]='-';
			table[9][8]='-';
			turn=1;
			flag=0;
			answer='\0';
		}
		
	}while(answer!='n');

	return 0;
}