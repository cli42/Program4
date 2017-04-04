/*
	Title: arrayHeader.h
	Author: Chenghao Li
	Date: 04/02/17
	Purpose: Program to calculate how many donuts eaten by each student, total, average, max amount
			 min amount, the most popular type and the most popular location.
*/			 

#if!defined  ARRAYHEADER_H
#define ARRAYHEADER_H

#include <iostream>

using namespace std;

/*
	Purpose: dynamically allocate a new array
	Pre: integer size of the array
	Pro: return a pointer to array
*/
int* makeArray(int);
 
/*
	Purpose: get the largest data in the array
	Pre: pointer to integer array and size of the array
	Pro: the largest data
*/
int getLargest(int*, int);

/*
	Purpose: get the smallest data in the array
	Pre: pointer to integer array and size of the array 
	Pro: the smallest data
*/
int getSmallest(int*, int);

/*
	Purpose: total up all array elements
	Pre: pointer to integer array and size of the array
	Pro: the total of all array elements
*/
int getTotal(int*, int);

/*
	Purpose: get the type mode from a array 
	Pre: pointer to integer array and size of the array
	Pro: the type mode
*/
int getTypeMode(int*, int);

/*
	Purpose: get the location mode from a array
	Pre: pointer to integer array and size of the array
	Pro: the location mode 
*/
int getLocMode(int*, int);

#endif