#include <stdio.h>

int main() {

	int totalData,number[100],i,maxNumber;
	
	scanf("%d",&totalData); getchar();
	
	for(i=0;i<totalData;i++){
		scanf("%d",&number[i]); getchar();
			if((number[i-1])%2!=0)
				maxNumber=0;
			else maxNumber=number[i-1];
		}	
	for(i=1;i<totalData;i++){
		if(number[i]%2==0 && number[i]>maxNumber)
			maxNumber=number[i];
		else maxNumber=maxNumber;
		}
	if(maxNumber!=0)
		printf("%d\n",maxNumber);
	else if(maxNumber==0)
		printf("Sad Birthday\n");
	
	getchar();
	return 0;
}