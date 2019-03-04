/*Nicolas A. Serna 
Date: 2/18/2019
Homework 5 - COP2220*/
#define _CRT_SECURE_NO_WARNINGS // used to all scanf to work
#include <stdio.h>              // used for printf and scanf functions
#define CAPITAL_TO_SMALL_OFFSET 32
// put the function prototypes here
char toSmall(char enterChar)
{
    char result_char;
    if (enterChar >= 'A' && enterChar <= 'Z')
    {
        //this converts an uppercase to lowercase
        result_char = enterChar + CAPITAL_TO_SMALL_OFFSET;
        return result_char;
    }
    return enterChar;
}
double absValue(double enteredDouble)
{
    if (enteredDouble < 0)
    {
        /*If the number is negative, it 
        converts it to positive*/
        enteredDouble = enteredDouble * (-1);
    }
    return enteredDouble;
}
void printLine(char enteredChar1, char enteredChar2, int enteredInt)
{ //the first character is printed at the begining of the line
    printf("%c", enteredChar1);
    int count = 0;
    while (count < enteredInt)
    {
        /*the second character is added n amount 
        (based on enterInt) of times in between the 
        first character
         ex: ABBBBA
         */
        printf("%c", enteredChar2);
        count += 1;
    }
    //the first character is printed at the end of the line
    printf("%c", enteredChar1);
    printf("\n");
}
void displayRect(int widthInt, int heightInt)
{
    int displayRectCount = 0;
    //this makes the upper side of the rectangle
    printLine(' ', '-', widthInt);
    while (displayRectCount < heightInt)
    {
        //this makes the right and left sides of the rectangle
        printLine('|', ' ', widthInt);
        displayRectCount++;
    }
    //this makes the bottom of the rectangle
    printLine(' ', '-', widthInt);
}
int main()
{
    printf("Nicolas A. Serna\n");
    char capitalCharacter, finalChar, section3Char1, section3Char2;
    double section2Double = 0.0, section2Result = 0.0;
    int section3Int = 0;
    int rectWidth = 0, rectHeight = 0;

    //section1
    printf("The small of %c is %c\n", 'M', toSmall('M'));
    printf("The small of %c is %c\n", 'm', toSmall('m'));
    printf("The small of %c is %c\n", '1', toSmall('1'));

    //Section 2 test
    printf("the absolute value of %.2lf is %.2lf\n", -3.4, absValue(-3.4));
    printf("the absolute value of %.2lf is %.2lf\n", 5.0, absValue(5.0));

    //Section 3 test
    printLine(' ', '-', 5);
    printLine('|', ' ', 5);
    // Extra Credit test
    printf("enter the width of the rectangle ");
    scanf("%d", &rectWidth);
    printf("enter the height of the rectangle ");
    scanf("%d", &rectHeight);
    displayRect(rectWidth, rectHeight);
    return 0;
}
// Definition of the toSmall function goes here
/*toSmall function grabs a character input and converts it 
to lowercase if it is an uppercase otherwise it stays the same */
// Definition of the absValue function goes here
/* returns the absolute value of a double by multiplying negative
numbers by one */
// Definition of the printLine function goes here
/*grabs one character that is printed at the begining and end of a line 
while it prints another character a certain amount of times in between the letters of the 
first input
*/
// Extra Credit - Definition of the displayRect function goes here
/*uses printLine function to make a rectangle. The first parameter is width and the second parameter 
is height*/
