/*

April 7, 2019
Homework 8 - COP2220
*/
#define _CRT_SECURE_NO_WARNINGS // used to all scanf to work
#include <stdio.h>  // used for printf and scanf functions

// you must put the function prototypes here
void passwordCheck(char a1[],int *valid,int *capitalLetter,int *smallLetter,int *digits);
void findNumberCount(int a[],int length,int *odd,int *even,int *other);

int main()
{
	printf("Homework 8 by your Nicolas Serna\n");



	// Password check
	int pwResult;  // holds the result of the password check
	int capitalCount, smallCount, digitCount; // holds the counts
	char pw1[] = "15desZ9#";  // good password
	// you must call passwordCheck() here using the pw1 array, pwResult, capitalCount, smallCount, and digitCount
	passwordCheck(pw1,&pwResult,&capitalCount,&smallCount, &digitCount);

	printf("The password of %s has %d capital letters, %d small letters, %d digits\n", pw1, capitalCount, smallCount, digitCount);
	printf("The password of %s is %s\n\n", pw1, (pwResult ?"valid":"invalid"));

	char pw2[] = "abdesg9#"; // no Caps
	// you must call passwordCheck() here using the pw1 array, pwResult, capitalCount, smallCount, and digitCount
	passwordCheck(pw2,&pwResult,&capitalCount,&smallCount, &digitCount);

	printf("The password of %s has %d capital letters, %d small letters, %d digits\n", pw2, capitalCount, smallCount, digitCount);
	printf("The password of %s is %s\n\n", pw2, (pwResult ? "valid" : "invalid"));

	char pw3[] = "Abdesg@#"; // no digits
	// you must call passwordCheck() here using the pw1 array, pwResult, capitalCount, smallCount, and digitCount
	passwordCheck(pw3,&pwResult,&capitalCount,&smallCount, &digitCount);

	printf("The password of %s has %d capital letters, %d small letters, %d digits\n", pw3, capitalCount, smallCount, digitCount);
	printf("The password of %s is %s\n\n", pw3, (pwResult ? "valid" : "invalid"));

	char pw4[] = "15129Z9#"; // no small letters
	// you must call passwordCheck() here using the pw1 array, pwResult, capitalCount, smallCount, and digitCount
	passwordCheck(pw4,&pwResult,&capitalCount,&smallCount, &digitCount);

	printf("The password of %s has %d capital letters, %d small letters, %d digits\n", pw4, capitalCount, smallCount, digitCount);
	printf("The password of %s is %s\n\n", pw4, (pwResult ? "valid" : "invalid"));

	char pw5[] = "15aAr$z"; // too short
	passwordCheck(pw5,&pwResult,&capitalCount,&smallCount, &digitCount);
	// you must call passwordCheck() here using the pw1 array, pwResult, capitalCount, smallCount, and digitCount

	printf("The password of %s has %d capital letters, %d small letters, %d digits\n", pw5, capitalCount, smallCount, digitCount);
	printf("The password of %s is %s\n\n", pw5, (pwResult ? "valid" : "invalid"));


	// test the findNumberCount function
	int testArray[] = { -2, 1, 11, 3, 8, 10, 4, 9 };
	int arrayLength = 8;
	int odd, even, others;
	// you must call findNumberCount() function here using the testArray array, arrayLength, odd, even, and others
	findNumberCount( testArray, arrayLength, &odd, &even, &others);


	printf("The following array ");
	for (int i = 0; i < arrayLength; i++)
	{ // display the array numbers
		printf("%d ", testArray[i]);
	}
	printf("has %d single digit positive even numbers, %d single digit positive odd numbers, and %d other numbers\n", even, odd, others);
	return 0;
}

// The function passwordCheck() has 5 input paramters.
// 1) input parameter named a1 is a null terminated character array.
// 2) input parameter named valid is a pointer to an integer.
// 3) input parameter named capitalLetter is a pointer to an integer.
// 4) input parameter named smallLetter is a pointer to an integer.
// 5) input parameter named digits is a pointer to an integer.
// The function passwordCheck() does not return a value (void).
// The function passwordCheck() will check the character array for the
// following criteria. There must be at least 1 small letter AND at least
// 1 capital letter, AND at least 1 digit, AND must be a minimum of 8 characters
// long. If the character array meets the stated criteria then a 1 is set to
// the "valid" input paramter. Otherwise a 0 is set to the "valid" input paramter.
// The number of capital letters, small letters, and digits is saved in the input variables
// capitalLetter, smallLetter, and digits, respectively.
void passwordCheck(char a1[],int *valid,int *capitalLetter,int *smallLetter,int *digits){
	//set valid to a default of false or 0
	*valid = 0;
	//

	int smallLetterCount = 0;
	int capitalLetterCount = 0;
	int digitCount = 0;
	int countLength = 0;
	for (int i = 0; a1[i] != '\0'; i++){
		if(a1[i]>= 'a'&& a1[i]<= 'z'){
			//keeps count of how many lowercase letters are in the array
			smallLetterCount ++;
		}
		if(a1[i]>= 'A'&& a1[i]<= 'Z'){
			//keeps count of how many lowercase letters are in the array
			capitalLetterCount ++;
		}
		if(a1[i]>= '0'&& a1[i]<= '9'){
			//keeps count of how many digits are in the array
			digitCount ++;
		}
		//counts how many characters are in the password
		countLength++;
	}
	if(smallLetterCount >= 1 && capitalLetterCount >= 1 && digitCount >= 1 && countLength >= 8){
		*valid =1;
	}
	*capitalLetter = capitalLetterCount;
	*smallLetter = smallLetterCount;
	*digits = digitCount;

}



// The function findNumberCount() has 5 input paramters.
// 1) input parameter named a is an integer array.
// 2) input parameter named length is the length of the array.
// 3) input parameter named odd is a pointer to an integer.
// 4) input parameter named even is a pointer to an integer.
// 5) input parameter named others is a pointer to an integer.
// The function findNumberCount() does not return a value (void).
// The function findNumberCount() will count the numbers in the array
// that fall into 3 different catagories. The first category is single digit positive
// odd numbers (which include 1,3,5,7,9) and the count of these numbers is kept
// in the integer pointed to by odd. The second category is single digit positive
// even numbers (which include 0,2,4,6,8) and the count of these numbers is kept
// in the integer pointed to by even. The third category is all other numbers that
// do not fall into the 1st and 2nd caetegory and the count of these numbers is kept
// in the integer pointed to by others. You must use a switch statement to count the
// numbers in these 3 categories. You do not need to create labels for these constants.
void findNumberCount(int a[],int length,int *odd,int *even,int *other){
	int caseTtype = 0;
	//counts even numbers in array less than 10 but positive
	int evenCount = 0;
	//counts odd numbers in array less than 10 but positive
	int oddCount = 0;
	//counts negative numbers and numbers with double digits
	int otherCount = 0;
	for(int i = 0; i < length;i++){
		if (a[i] < 0 || a[i] > 9){
			caseTtype = 3;
		}else{
			caseTtype = a[i] % 2;
		}
		switch(caseTtype){
			//case 0 is even numbers
			case 0:
				evenCount += 1;
				break;
			//case 1 is odd numbers
			case 1:
				oddCount +=1;
				break;
			//numbers with double digits or negative
			case 3: otherCount += 1;
			break;
		}

	}
	*even = evenCount;
	*odd = oddCount;
	*other = otherCount;

}
