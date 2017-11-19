#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
#define a fflush(stdin);
int main(){
	int jualan[5] = {2000000,2400000,200000,150000,850000};
	char nama[100];
	int c, m, k, mo, p;
	int hc, hm, hk, hmo, hp;
	int total;
	printf("\t\t\t   Welcome to Bluejack Store\n");
	printf("\t\t\t===============================\n\n");
	printf("Input your name : ");
	scanf("%s",&nama); a;
	printf("\n\n\n\nHai %s,",nama);
	printf("\nList Item [0 if you dont want to order] : ");
	printf("\nCPU \t  Rp. 2.000.000 : ");
	scanf("%d",&c); a;
	printf("Monitor   Rp. 2.400.000 : ");
	scanf("%d",&m); a;
	printf("Keyboard  Rp. 200.000 \t: ");
	scanf("%d",&k); a;
	printf("Mouse \t  Rp. 150.000 \t: ");
	scanf("%d",&mo); a;
	printf("Printer   Rp. 850.000 \t: ");
	scanf("%d",&p); a;

	hc = c*jualan[0];
	hm = m*jualan[1];
	hk = k*jualan[2];
	hmo = mo*jualan[3];
	hp = p*jualan[4];

	printf("\n\n\nPurchase List :\n");
	printf("CPU \t  : %d = Rp. %d \n",c,hc);
	printf("Monitor   : %d = Rp. %d \n",m,hm);
	printf("Keyboard  : %d = Rp. %d \n",k,hk);
	printf("Mouse \t  : %d = Rp. %d \n",mo,hmo);
	printf("Printer   : %d = Rp. %d \n",p,hp);
	
	total = hc+hm+hk+hmo+hp;
	
	printf("\nTotal \t  : Rp. %d",total);
	getchar();
	return 0;
}