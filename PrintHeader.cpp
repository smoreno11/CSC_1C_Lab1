/******************************************************************************
 * AUTHOR      : Saul Moreno & Nico Platt
 * LAB #       : 1
 * CLASS       : CS1C
 * SECTION     : MW 5:00pm
 * DUE DATE    : 8/19/20
 ******************************************************************************/

#include"header.h"

/******************************************************************************
*FUNCTION - PrintHeader
*______________________________________________________________________________
*This function receives an assignment name, type and number then outputs the
* appropriate header - returns nothing.
*______________________________________________________________________________
*PRE-CONDITIONS
*	  asName:  Has to be previously defined
*	  asType:    Has to be previously defined
*	  asNum: Has to be previously defined
*
*POST-CONDITIONS
*	   This function will output class heading.
*	   <Post-conditions are the changed outputs either passed by value or
*	   by reference OR anything affected by the function.
*
*******************************************************************************/

void PrintHeader(string asName,  // IN - Assignment Name
		             int asNum,  // IN - assignment type
					             // (LAB or ASSIGNMENT)
					 char asType)// IN - assignment number
{
 cout << left;
 cout << "********************************************************\n";
 cout << "* PROGRAMMED BY : Saul Moreno & Nico Platt\n";
 cout << "* "<< setw (14) << "CLASS" << ": CS 1C MW-5:00pm\n";
 cout << "* ";
 if (toupper (asType) == 'L')
 {
  cout << "LAB #"<< setw(9);
 }
 else
 {
  cout <<"ASSIGNMENT #" << setw(2);
 }
 cout << asNum << ": " << asName << endl;
 cout << "*********************************************************\n\n";
 cout <<right;
}
