/*NameFeb 10, 2019Homework 4 - COP2220*/
#define _CRT_SECURE_NO_WARNINGS // used to all scanf to work
#include <stdio.h>				/* used for printf and scanf functions */

void section1()
{
	/*Created a while loop that that loops 5 times
from 5 - 1 */
	int initialInt = 5;
	while (initialInt > 0)
	{
		printf("%d ", initialInt);
		initialInt -= 1;
	}
	printf("\n");
}

void section2()
{
	/*increment int96 from 96 to
	100 and print results 
	*/
	int int96 = 96;
	while (int96 <= 100)
	{
		printf("%d ", int96);
		int96 += 1;
	}
	printf("\n");
}

void section3()
{
	/*
	Using a while loop, query the user 
	to enter any character.Each of these 3 possibilities 
	total's should be displayed on a separate line.
	*/
	char intitialChar;
	int count = 1;
	int alphaCount = 0;
	int digitCount = 0;
	int otherCount = 0;

	while (count <= 10)
	{
		printf("enter  character %d \n", count);
		scanf(" %c", &intitialChar);
		if ((intitialChar >= 'a' && intitialChar <= 'z') ||
			(intitialChar >= 'A' && intitialChar <= 'Z'))
		{
			alphaCount += 1;
		}
		else if (intitialChar >= '0' && intitialChar <= '9')
		{
			digitCount += 1;
		}
		else
		{
			otherCount += 1;
		}
		count++;
	}
	printf("You have entered %d letters.\n", alphaCount);
	printf("You have entered %d digits\n", digitCount);
	printf("You have entered %d other characters.\n", otherCount);
}

void section4()
{
	/*query the user for an integer number or -999 
	to quit the entry process. Obtain Average of the total
	sum and the number of entries
	*/
	int queriedInput = 0, sum = 0;
	float count = -1;
	float average;
	do
	{
		printf("Enter a number: ");
		scanf("%d", &queriedInput);
		if (queriedInput != -999)
		{
			sum += queriedInput;
		}

		count += 1;
	} while (queriedInput != -999);

	if (count == 0)
	{
		printf("0 entries were made and the average cannot be determined\n");
	}
	else
	{
		average = sum / count;
		printf("number of entries: %.1f \n", count);
		printf("average of the entries to 2 decimal places: %.2f \n", average);
	}
}

int main()
{

	printf("Nicolas A. Serna\n");
	printf("using visual studio");
	//section1
	section1();

	//section2
	section2();

	//section3
	section3();

	// section4
	section4();
	return 0;
}