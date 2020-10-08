/*
Author: TowerX (https://github.com/TowerX/)
Date: October 8, 2020
Purpose: Simple Geometric Calculator > Calculate the area of given sides.
FileName: GeometricCalculator.cpp : This file contains the 'main' function.
*/

// Include required libraries
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
	// First Part

	// Declare and initialize: Variable sideA of Type int with a value of 3.
	int sideA = 3;
	// Declare and initialize: Variable sideB of Type int with a value of 4.
	int sideB = 4;
	// Declare variable area of type int.
	int area;
	// Calculate area.
	area = (sideA * sideB) / 2;
	// Output the value of sideA, sideB and area calculation to the console with some text. Added a new line at the end to separate the content.
	cout << "The sides of the triangle measure " << sideA << " and " << sideB << "." << " The area is " << area << "."<< "\n";

	// Second Part

	// Declare and initialize: Variable dSideA of Type double with a value of 0.
	double dSideA = 0;
	// Declare and initialize: Variable sideB of Type double with a value of 0.
	double dSideB = 0;
	// Declare a variable to hold the multiplier value for easy access.
	int multiplier = 5;
	// Assign the value of sideA multiplied by 5 to the variable dSideA and dSideB respectively. (side * multiplier).
	dSideA = (sideA * multiplier);
	dSideB = (sideB * multiplier);
	// Create a new area variable of Type double called dArea.
	double dArea;
	// Calculate the area
	dArea = (dSideA * dSideB) / 2;
	// Output the value of dSideA, sideB and dArea calculation to the console with some text.
	cout << setprecision(1) << fixed << "The sides of the triangle measure " << dSideA << " and " << dSideB << "." << " The area is " << dArea << "\n";

	return 0;
}
