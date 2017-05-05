#include <stdio.h>

/*
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]); // Liza Song
int getSumOfSquares(int myArray[]); // Reaksmey Kongkea Chea
void printAsChars(int myArray[]); // Reaksmey Kongkea Chea
double getAverage(int myArray[]); // Phyrum Rithchea
int subtractAllValues(int myArray[]); // Borey Cheng
float invertAllValues(int myArray[]); // Borey Cheng
void printGroupMemberNames(); // Phyrum Rithchea

int main(void) {
	printGroupMemberNames();    //working
	int row[500], i;
	double avg;
	for (i = 0; i < 500; i++) {
		row[i] = i;
	}
	printf("\nThis is the sum:\n");   //working
	getSum(row);
	printf("\nSubtract all the elements with -1:\n"); //working
	subtractAllValues(row);
	printf("\nInvert all the value:\n");   //working
	invertAllValues(row);
	printf("\nThe sum of square: \n");   //working
	getSumOfSquares(row);
	printf("\nPrint as character:\n");   //working
	printAsChars(row);
	printf("\nThis is the average: \n%f", getAverage(row));  //working	
	return 1;
}
//Phyrum Rithchea
/* Print Group Member names */
void printGroupMemberNames()
{
	printf("Phyrum Rithchea\nLiza Song\nReaksmey Kongkea Chea\nBorey Cheng\n"); // Print member names by starting with a new line
}
//Phyrum Rithchea
/* This code is used to find the average of the array (myArray)*/
double getAverage(int myArray[]) {
	// double avg; // Average is sometimes double number.
	int sum = 0, element;
	for (element = 0; element < 500; element++) {
		sum += myArray[element];
	}
	return (double)sum / 500;
}
// lYZA SONG
int getSum(int myArray[]) {
	int getSum = 0, i;
	for (i = 0; i < 500; i++) {
		getSum += myArray[i];
	}
	printf("%i ", getSum);
	return 0;
}
// BOREY CHENG
int subtractAllValues(int myArray[]) {
	int i, tm[500];
	for (i = 0; i < 500; i++) {
		tm[i] = myArray[i];
	}
	for (i = 0; i < 500; i++) {
		tm[i] = tm[i] - 1;
	}
	for (i = 0; i < 500; i++) {
		printf("%i ", tm[i]);
	}
	return 0;
}
// BOREY CHENG
float invertAllValues(int myArray[]) {
	int i, temp, tm[500];
	for (i = 0; i < 500; i++) {
		tm[i] = myArray[i];
	}
	for (i = 0; i < 500 / 2; i++)
	{
		temp = tm[i];
		tm[i] = tm[499 - i];
		tm[499 - i] = temp;
	}
	for (i = 0; i < 500; i++)
	{
		printf("%f ", (float)tm[i]);
	}
	return 0;
}
//kongkea
int getSumOfSquares(int myArray[]) {
	int n = 1, result = 0, i;
	for (i = 0; i < 499; i++) {   //499 not 500 cux it's from 0 to 499
		n = myArray[i] * myArray[i];
		result += n;
	}
	printf("%i", result);
	return 0;
}
//kongkea
void printAsChars(int myArray[]) {
	int i;
	for (i = 0; i < 500; i++) {
		printf("%c ", myArray[i]);
	}
}
