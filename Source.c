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
	for (i = 0; i < 500; i++)
		row[i] = i;

	return 1;
}

int getSum(int myArray[]){
    int getSum = 0, i;
	for (i = 0; i < 500; i++) {
		getSum += myArray[i];
	}
	printf("%i", getSum);
	return 0;
}

int subtractAllValues(int myArray[]){
	int i;
	for( i=0 ; i < 500; i++)
		myArray[i]-1;
	for( i=0 ; i < 500; i++)
		printf("%i", myArray[i]);
	return 0;
}

float invertAllValues(int myArray[] ){
	int i;
	float temp;
	for( i=0; i < 500; i++){
		temp=myArray[i];
		myArray[i]=myArray[499-i];
		myArray[499-i]=temp;
	}
	for( i=0; i < 500; i++){
		printf("%f", myArray[i]);
	}
	return 0;
}

void printGroupMemberNames() {
	printf("James Bond\n Brad Pitt/n");

}
