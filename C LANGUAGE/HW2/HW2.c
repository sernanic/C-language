/*NameDateBrief description*/
#define _CRT_SECURE_NO_WARNINGS 
// used to all scanf to work
#include <stdio.h>  /* used for printf and scanf functions */
#define TOTAL_NUMBER_OF_DAYS 3.0  
// used for the coffee average
#define SECONDS_PER_MINUTE 60  
// used for time converter
int totalCupsFunc(int cup1,int cup2,int cup3){
	int total = cup1 + cup2 + cup3;
	return total;
}
double averageResult(int cupTotal){

	double average = cupTotal / TOTAL_NUMBER_OF_DAYS;
	return average;
}
int secondConverter(int time){
	int finalSeconds = time % SECONDS_PER_MINUTE;
	return finalSeconds;
}
int minuteConverter(int time){
	int finalMinutes = time / SECONDS_PER_MINUTE;
	return finalMinutes;
}
int main(){
	// define the variables for the coffee calculator
	int cupsTwoDayAgo, cupsOneDayAgo, cupsToday;
	int totalCups;
	double avergeCups;
	// define the variables for the time converter
	int userTime;
	int convertedSeconds, convertedMinutes;
	printf("Nicolas A serna\n");
	printf("Enter the number of cups of coffee consumed 2 days ago and save \n");
	scanf("%d.\n",&cupsTwoDayAgo);
	printf("enter the number of cups of coffee consumed 1 day ago \n");
	scanf("%d.\n",&cupsOneDayAgo);
	printf("enter the number of cups of coffee consumed today \n");
	scanf("%d.\n",&cupsToday);

	//get the total number of cups of coffee
	totalCups = totalCupsFunc(cupsTwoDayAgo,cupsOneDayAgo,cupsToday);

	printf("total number of cups of coffee %d consumed over the last 3 days.\n",totalCups );

	//obtain the average number of cups of coffee per day

	avergeCups = averageResult(totalCups);

	printf("You have consumed on average %.2f cups of coffee per day over the last 3 days.\n", avergeCups );

	//Calculator portion of the project

	printf("Enter the amount of seconds\n");
	scanf("%d.\n",&userTime);
	convertedSeconds = secondConverter(userTime);
	convertedMinutes = minuteConverter(userTime);

	printf("%d seconds equals %d minute and %d seconds\n",userTime,convertedMinutes,convertedSeconds );

	return 0;
}