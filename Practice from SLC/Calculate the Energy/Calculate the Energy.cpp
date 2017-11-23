#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
int main(){
	int mass, velocity;
	float kinetic_energy;
	int mass_object, gravity, height; 
	float potential_energy;
	float mechanical_energy;

	printf("\t\t   Physics Calculators\n");
	printf("\t\t*-*-*-*-*-*-*-*-*-*-*-*-\n\n");

	printf("Calculating Kinetic Energy\n");
	printf("******************************\n\n");
	printf("\t KE = 1/2 mv^2 \n\n");
	printf("Where\t: m = mass\n");
	printf("\t: v = velocity\n\n");
	printf("Input m : ");
	scanf("%d",&mass); fflush(stdin);
	printf("Input v : ");
	scanf("%d",&velocity); fflush(stdin);
	kinetic_energy = mass*velocity*velocity/2;
	printf("\nKinetic Energy : %.2f",kinetic_energy);
	getchar();
	
	printf("\n\nCalculating Potential Energy\n");
	printf("***************************\n\n");
	printf("\t PE = m.g.h \n\n");
	printf("Where\t: m = mass of object\n");
	printf("\t: g = acceleration of gravity\n");
	printf("\t: h = height of object\n\n");
	printf("Input m : ");
	scanf("%d",&mass_object); fflush(stdin);
	printf("Input g : ");
	scanf("%d",&gravity); fflush(stdin);
	printf("Input g : ");
	scanf("%d",&height); fflush(stdin);
	potential_energy = mass_object*gravity*height;
	printf("\nPotential Energy : %.2f",potential_energy);
	getchar();

	printf("\n\nCalculating Mechanical Energy\n");
	printf("******************************\n\n");
	printf("\t ME = PE + KE \n\n");
	printf("Where\t: PE = Potential Energy\n");
	printf("\t: KE = Kinetic Energy\n\n");
	mechanical_energy = potential_energy+kinetic_energy;
	printf("\nMechanical Energy : %.2f + %.2f = %.2f"
		,potential_energy,kinetic_energy,mechanical_energy);
	getchar();

	printf("\n\n\n\n\nThank you for using this program.....");
	
	getchar();
	return 0;
}