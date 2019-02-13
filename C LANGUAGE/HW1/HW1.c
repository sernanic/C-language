/*Nicolas Serna
01/20/2019
A small project the uses scanf and printf in order to query the user*/
#define _CRT_SECURE_NO_WARNINGS // used to all scanf to work
#include <stdio.h>  /* used for printf and scanf functions */
int main(){

	double previousNightHours,hoursAnticipatedTonight,doubleExample;
	int classNumberGrade, integerExample;
	char characterExample = 'a';
	float floatExample = 2.3;

	//display the name of the creator of the program
	printf("Nicolas Serna\n");
	
	//ask user for hours of 
	printf("Enter the number of hours of sleep for the previous night.\n");
	scanf("%lf.\n",&previousNightHours);
	//number of hours asleep anticipated tonight
	printf("Enter the number of hours of sleep that was anticipated for tonight.\n");
	scanf("%lf.\n",&hoursAnticipatedTonight);
	//print what the user slept last night and what he wishes to sleep tonight
	printf("Your sleep last night was %.1lf hours and your anticipated \
		sleep tonight is %.1lf hours.\n",previousNightHours,hoursAnticipatedTonight );

	//query the desired grade for the class
	printf("What number grade is targeted in this class\n");
	scanf("%d.\n",&classNumberGrade);
	printf("You are expecting to receive a grade of %d in this class\n",classNumberGrade );
	//demonstrate the bytes every type has using the sizeof operator
	printf("On this computer platform an integer is allocated with %lu bytes.\n",sizeof(integerExample));
	printf("On this computer platform a character is allocated with %lu  bytes.\n",sizeof(characterExample));
	printf("On this computer platform a float is allocated with %lu  bytes.\n",sizeof(floatExample));
	printf("On this computer platform a double is allocated with %lu  bytes.\n",sizeof(doubleExample));


	return 0;
}