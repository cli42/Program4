/*
	Title: donut.h
	Author: Chenghao Li
	Date: 04/02/17
	Purpose: Program to calculate how many donuts eaten by each student, total, average, max amount
			 min amount, the most popular type and the most popular location.
*/	

#if!defined DONUT_H
#define DONUT_H

#include <iostream>
#include <limits>

using namespace std;

/*
	Purpose: get the information from user and input it in the appropriate array
	Pre: a pointer to three different arrays
	Pro: no return 
*/
void enterData(int*, int*, int*, int);

#endif