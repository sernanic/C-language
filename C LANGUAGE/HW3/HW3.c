/*Nicolas A. Serna 
2/7/2019
Homework 3 -
COP2220*/
#define _CRT_SECURE_NO_WARNINGS
// used to all scanf to work
#include <stdio.h>
/* used for printf and scanf functions */
#define SMALL_TO_CAPITAL_OFFSET 32
#define DIGIT_OFFSET 48
void section1(int integer1)
{
	/*this function determines if a positive integer is
	even or odd*/
	printf("Enter a positive integer\n");
	scanf("%d.\n", &integer1);
	if (integer1 < 0)
	{
		printf("This is not a positive number\n");
	}
	else
	{
		if (integer1 % 2 == 0)
		{
			printf("The number %d is an even number.\n", integer1);
		}
		else
		{
			printf("The number %d is an odd number.\n", integer1);
		}
	}
}
void section2(char lowercase, char uppercase)
{
	/*this function converts a lowercase character
	to an uppercase character*/
	printf("enter a lowercase letter from a to z\n");
	scanf(" %c.\n", &lowercase);
	uppercase = lowercase - SMALL_TO_CAPITAL_OFFSET;

	if (lowercase < 'a' || lowercase > 'z')
	{
		printf("The entered character is not a small letter.\n");
	}
	else
	{
		printf("The converted capital letter is %c.\n", uppercase);
	}
}
void section3(char enteredCharacter, int charToInt)
{
	/*this function converts a character between 0 and 9 to an integer with the
	 corresponding value */
	/*Note: if a string of numbers is entered, this function will not work
	properly*/
	printf("enter a digit character from 0 to 9 inclusive\n");
	scanf(" %c.\n", &enteredCharacter);
	charToInt = enteredCharacter - DIGIT_OFFSET;
	if (enteredCharacter < '0' || enteredCharacter > '9')
	{
		printf("The entered character is not a digit between 0 and 9.\n");
	}
	else
	{

		printf("The converted integer number is %d.\n", charToInt);
	}
}
int main()
{
	printf("Nicolas A. serna\n");
	// Section 1
	int evaluateInt; // define the variable for Section 1
	printf("the nuimber is %d", evaluateInt);
	section1(evaluateInt);
	// Section 2
	char userChar, convertedChar; // define the variables for Section 2
	section2(userChar, convertedChar);
	// Section 3
	// define the variables to convert a character digit to an integer
	char charDigit;
	int newInt;
	section3(charDigit, newInt);
	char newchae = 'w';
	printf("test sizeof with types\n");
	printf(" %lu \n", sizeof(newchae));

	return 0;
}
