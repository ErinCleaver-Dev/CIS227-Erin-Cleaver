/*
* Name - Erin Cleaver
* Class CIS227 21/WI
* Assignment 0
* Date 1/13/21
*
* Purpose Review C++
*/

#include "shapeCalculations.h"
#include <math.h>
#include <iostream>
ShapeCalculations::ShapeCalculations() {
	this->dTriangleSideA = 0;
	this->dTriangleSideB = 0;
	this->dTrapezoidBaseA = 0;
	this->dTrapezoidBaseB = 0;
	this->dTrapezoidHight = 0;
	this->dRectanguleWidth = 0;
	this->dRectanguleHight = 0;
	this->dRectanguleLenght = 0;
}

ShapeCalculations::~ShapeCalculations()
{
}

// Used to calucate the Hypotenuse of a Triangle
// The length of the hypotenuse of a right triangle can be found using the Pythagorean 
// theorem, which states that the square of the length of the hyzpotenuse equals 
// the sum of the squares of the lengths of the other two sides.
double ShapeCalculations::CalculateHypotenuseofaTriangle()
{
	// First it squares Side A by 2 and then Side B by 2.  Next it adds the results togetter.  Then it finds the square root of the equation and returns the value.

	return sqrt(((pow(dTriangleSideA, 2)) + (pow(dTriangleSideB, 2))));
}

//Used to calucate the Area of a Trpezoide 
//To get the area of the area of the trapezoide first you add the two 
//sides of the base, divided it by 2, and then muptliple it by the hight. 
double ShapeCalculations::CalculateAreaofTrapezoid()
{

	// First it adds Base A and Base B togetter.  Then it divids it by 2.  Lastly it multiplies it by the hight of the trapezoid 
	return ((dTrapezoidBaseA + dTrapezoidBaseB)/2) * dTrapezoidHight;
}

//Used to Calculate the volume of a rectangle
//To get the Volume of the rectangule you muiltiply by length, by height, and by width
double ShapeCalculations::CalcuateVolumeofRectangle()
{
	//muiltiplies by length, by height, and by width
	return dRectanguleWidth * dRectanguleLenght * dRectanguleHight;
}

