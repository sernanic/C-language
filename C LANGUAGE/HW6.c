/*DateHomework 6 - COP2220*/
#define _CRT_SECURE_NO_WARNINGS // used to all scanf to work
#include <stdio.h>  // used for printf and scanf functions
#include <stdlib.h>
#include <time.h>
#define Array_Size 7

int getRandomInteger();
void guessGame();
void DisplayArray(int mainArray[], int length);

int main(){

	printf("nicolas serna\n" );
	printf("Welcome to the guessong game\n" );
	printf("You have 7 attempts to guess a random number from 1 to 100\n");

	guessGame();
	return 0;
}
//this function has the guessing game

void guessGame(){

	int sevenGuessesArray [Array_Size];
	int randomInt = getRandomInteger();
	int numberGuesses = 0,enteredGuess = 0;
	
	while(numberGuesses < Array_Size){
		printf("Enter your next guess\n");
		scanf("%d",&enteredGuess);
		sevenGuessesArray[numberGuesses] = enteredGuess;
		//if the user guesses the random int
		if(enteredGuess == randomInt){
			printf("Congratulations, you have entered the correct number in %d guess\n",numberGuesses+1 );
			break;
		}
		else if (enteredGuess < randomInt){
			printf("Your guess is too low\n" );
		}
		else{
			printf("Your guess is too high\n");
		}
		++numberGuesses;
		
	}//End of the while loop
	if(numberGuesses == Array_Size){
			printf("The coorect number was %d\n",randomInt);
			printf("Unfortunately, you were not able to guess the correct number within 7 guesses\n ",randomInt);
			
		}
	
	DisplayArray(sevenGuessesArray,numberGuesses);
}
// getRandomInteger will return a random integer number between 1 and 100
// do not make any changes to this functionint 
int getRandomInteger(){
	static int initialized = 0;
	if (initialized == 0){ 
		// if the first time through then
		srand((unsigned)time(0));  // Initialize random number generator.
		initialized = 1;
	}
	return rand() % 100 + 1;
}
//this function displays all numbers in the array
void DisplayArray(int mainArray [],int length){
	int count = 0;
	int number = 0;
	//displays the numbers in the array
	if(length == Array_Size){
		length -= 1;
	}
	printf("Your guesses were\n");
	while(count <= length){
		number = mainArray[count];
		printf("%d ",number );
		count++;
	}
}

