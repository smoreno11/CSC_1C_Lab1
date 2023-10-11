/******************************************************************************
 * AUTHOR      : Saul Moreno & Nico Platt
 * LAB #       : 1
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 8/19/20
 ******************************************************************************/

#include "header.h"

/******************************************************************************
 * LAB 1
 * ----------------------------------------------------------------------------
 * This program will generate random numbers, take the unsorted #'s and sort
 * them, then reverse their order. Finally, calculate the sum into a new array.
 * ----------------------------------------------------------------------------
 * INPUT:
 *     <There is no input for this program - output data is obtained through
 *     the srand.>
 *
 * OUTPUT:
 *    <This program will output the three arrays that store the values of
 *    the sorted array, reversed # array, and the sum array. >
 *****************************************************************************/
int main()
{
	const int AR_SIZE = 15;  // CALC - The size of the array

	int numberAr[AR_SIZE];   // CALC - array with size of 15
	int sortedAr[AR_SIZE];   // OUT  - the sorted array
	int reversedAr[AR_SIZE]; //OUT - the reversed array
	int sumAr[AR_SIZE]; 	 //OUT -
	arNum firstNum;
	arNum secondNum;
	int sumIndex;
	int temp;  //CALC - Temporary place holder for a number
	int count; //CALC - LCV
	int indexs; //CALC - index for the array & LCV
	int index; //CALC - allows the array to move to the next node
	int counts; // CALC - LCV
	int reversedIndex;  // CALC       - LCV for the reversed array
	int remainder;      // CALC       - holds the remainder of the # & LCV
	int reversedNumber; // CALC & OUT - the number, but in reserve

	reversedNumber = 0;

	srand(time(NULL)); // generates a random number

	PrintHeader("Random Numbers", 1, 'L');
	cout << "This program will generate random numbers, take the unsorted "
		 << "#'s from an " << endl <<	"array and sort them into a new array,"
		 << " then reverse their order into a new" << endl << "array. "
		 <<	"Finally, calculate the sum of the digits into a new array."
		 << endl << endl;

	cout << "Unsorted Array: ";
	for(index = 0; index < AR_SIZE; index++)
		{

			numberAr[index] = rand() % 99 + 1;
			cout << numberAr[index] << " ";

		}//end for(index = 0; index < AR_SIZE; index++)

	for(count = 0; count < AR_SIZE - 1; count++)
	{
		for(indexs = 0; indexs < AR_SIZE - 1 - count; indexs++)
		{
			if(numberAr[indexs] > numberAr[indexs + 1])
			{
				temp = numberAr[indexs];
				numberAr[indexs] = numberAr[indexs + 1];
				numberAr[indexs + 1] = temp;

			}//end if(numberAr[index] > numberAr[index + 1])

		}//end for(index = 0; index < AR_SIZE - 1 - count; index++)

	}//end for(count = 0; count < AR_SIZE; count++)

	cout << endl;

	cout << "Sorted array: ";

	for(counts = 0; counts < AR_SIZE; counts++)
		{
			sortedAr[counts] = numberAr[counts];
			cout << sortedAr[counts] << " ";

		}//end for(index = 0; index < AR_SIZE; index++)

	cout << endl;

	cout << "Reversed array: ";

	for(reversedIndex = 0; AR_SIZE > reversedIndex; reversedIndex++)
	{
		reversedAr[reversedIndex] = sortedAr[reversedIndex];

		while(reversedAr[reversedIndex] != 0)
		{
			remainder = reversedAr[reversedIndex] % 10;
			reversedNumber = reversedNumber * 10 + remainder;
			reversedAr[reversedIndex] = reversedAr[reversedIndex] / 10;

		}//end while(reversedAr[reversedIndex] != 0)

		if(reversedNumber < 10)
		{
			cout << "0" << reversedNumber << " ";
		}
		else
		{
			cout  << reversedNumber << " ";

		}//end if(reversedAr[reversedIndex] < 10)

		reversedNumber = 0;

	}//end for(reversedIndex = 14; reversedIndex > -1; reversedIndex--)

	cout << endl;

	cout << "\nThis is the sum of the two digits in one node (53 sum is 8): "
		 << endl;

	for(int index = 0; index < AR_SIZE; index++)
	{
		sumIndex = 0;
		firstNum = sortedAr[index] / 10;
		secondNum = sortedAr[index] % 10;
		sumIndex = firstNum + secondNum;
		sumAr[index] = sumIndex;
		cout <<  "The sum "<< firstNum <<  " + "
				           << secondNum  << " = " << sumAr[index] << endl;

	}//end (int index = 0; index < AR_SIZE; index++)

	return 0;
}


