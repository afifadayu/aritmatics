#include<stdio.h>
int main()
{
	long int x,detik,menit,jam,hari;
	scanf("%ld",&x); fflush(stdin);
	if(x<60)
	{
		hari = 0;
		jam = 0;
		menit = 0;
		detik = x;
	}
	else if(x>=60 && x<3600)
	{
		hari = 0;
		jam = 0;
		menit = x/60;
		detik = x%60;
	}
	else if(x>=3600 && x<86400)
	{
		hari = 0;
		jam = x/3600;
		menit = (x - (jam*3600))/60;
		detik = (x - (menit*60 + jam*3600));
	}
	else
	{
		hari = x/86400;
		jam = (x%86400)/3600;
		menit = (x - (jam*3600  + hari*86400))/60;
		detik = (x - (menit*60 + jam*3600 + hari*86400));
	}
	printf("%ld days, %ld hours, %ld minutes, %ld seconds.\n",hari,jam,menit,detik);
	getchar();
	return 0;
}