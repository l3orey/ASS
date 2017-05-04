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
float invertAllValues(int myArray[] ); // Borey Cheng
void printGroupMemberNames(); // Phyrum Rithchea

int main(void) {
	printGroupMemberNames();
	int row[500], i;
	for (i = 0; i < 500; i++){
		row[i] = i;
		printf("%i ", row[i]);
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
	return 1;
}

void printGroupMemberNames() {
	printf("Liza Song\nReaksmey Kongkea Chea\nPhyrum Rithchea\nBorey Cheng\n");

}
// lYZA SONG
int getSum(int myArray[]){
    int getSum = 0, i;
	for (i = 0; i < 500; i++) {
		getSum += myArray[i];
	}
	printf("%i ", getSum);
	return 0;
}
// BOREY CHENG
int subtractAllValues(int myArray[]){
	int i;
	for ( i=0 ; i < 500; i++){
		myArray[i]=myArray[i]-1;
	}
	for ( i=0 ; i < 500; i++){
		printf("%i ", myArray[i]);
	}
	return 0;
}
// BOREY CHENG
float invertAllValues(int myArray[] ){
	int i, temp;
	for ( i=0; i < 500/2; i++)
	{
		temp=myArray[i];
		myArray[i] =myArray[499-i];
		myArray[499-i] = temp;
	}
	for ( i=0; i < 500; i++)
	{
		printf("%f ", (float)myArray[i]);
	}
	return 0;
}
//kongkea
int getSumOfSquares(int myArray[]) {
	int n = 1, result = 0,i ;
	for (i = 0; i < 500; i++) {
		n = myArray[i] * myArray[i];
		result += n;
	}
	printf("%i", result);
	return 0;
}
//kongkea
void printAsChars(int myArray[]) {
	int i;
	for ( i = 0; i < 500; i++) {
		printf("%c ", myArray[i]);
	}
}
