#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(){
	/*
	1 megaByte = 1024 kiloBytes
	1 kiloByte = 1024 bytes
	*/
	int megaBytes, kiloBytes, Bytes;
	
	printf("+=+=+ COUNT BYTES +=+=+\n\n");
	printf(" input Megabytes : ");
	scanf("%d",&megaBytes); fflush(stdin);
	printf(" input Kilobytes : ");
	scanf("%d", &kiloBytes); fflush(stdin);
	printf("\n\n");
	printf("=+=+= Megabytes + Kilobytes = Bytes =+=+=+\n\n");
	printf(" Megabytes : %d Bytes \n",((megaBytes*1024)*1024));
	printf(" kiloBytes : %d Bytes \n",(kiloBytes*1024));
	
	Bytes = ((megaBytes*1024)*1024)+(kiloBytes*1024);

	printf(" %d + %d = %d \n",((megaBytes*1024)*1024)
		,(kiloBytes*1024),Bytes);
	getchar();
	return 0;
}