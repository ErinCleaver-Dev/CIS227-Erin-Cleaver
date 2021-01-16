/*
* Name - Erin Cleaver
* Class CIS227 21/WI
* Assignment 0
* Date 1/13/21
*
* Purpose Review C++
*/

#pragma once
#include <iostream>
class ShapeCalculations
{
private:
	// Declares the sides of the Triangle
	double dTriangleSideA, dTriangleSideB;

	// Declares the parts of the Trapezoid 	
	double dTrapezoidBaseA, dTrapezoidBaseB, dTrapezoidHight;

	// Declares the parts of the Rectangule
	double dRectanguleLenght, dRectanguleHight, dRectanguleWidth;
	
	//Boolen to determin if the equation will run
	
public:
	ShapeCalculations();
	~ShapeCalculations();

	// Used to calucate the Hypotenuse of a Triangle
	// The length of the hypotenuse of a right triangle can be found using the Pythagorean 
	// theorem, which states that the square of the length of the hypotenuse equals 
	// the sum of the squares of the lengths of the other two sides.
	double CalculateHypotenuseofaTriangle();
	
	//Used to calucate the Area of a Trpezoide 
	//To get the area of the area of the trapezoide first you add the two 
	//sides of the base, divided it by 2, and then muptliple it by the hight.  
	double CalculateAreaofTrapezoid();

	//Used to Calculate the volume of a rectangle
	//To get the Volume of the rectangule you muiltiply by length, by height, and by width
	double CalcuateVolumeofRectangle();

	//Gets the value of the side A of the Triangle
	void setTriangleSideA(double dValue) {
		this->dTriangleSideA = dValue;
	}

	//Gets the value of the side B of the Triangle
	void setTrinagleSideB(double dValue) {
		this->dTriangleSideB = dValue;
	}

	//Gets the value for the base A of the Trapezoid 
	void setTrapezoidBaseA(double dValue) {
		this->dTrapezoidBaseA = dValue;
	}

	//Gets the value for the base B of the Trapezoid
	void setTrapezoidBaseB(double dValue) {
		this->dTrapezoidBaseB = dValue;
	}

	//Gets the value for the height of the Trapezoid
	void setTrapezoidHight(double dValue) {
		this->dTrapezoidHight = dValue;
	}

	//Gets the value for the hight of the Rectangle 
	void setRectangleHight (double dValue) {
		this->dRectanguleHight = dValue;
	}

	//Gets the value for the Width of the Rectangle 
	void setRectangleWidth(double dValue) {
		this->dRectanguleWidth = dValue;
	}

	//Gets the value for the Lenght of the Rectangle
	void setRectangleLength(double dValue) {
		this->dRectanguleLenght = dValue;
	}
};

