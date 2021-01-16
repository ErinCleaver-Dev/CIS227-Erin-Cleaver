/*
* Name - Erin Cleaver
* Class CIS227 21/WI
* Assignment 0
* Date 1/13/21
*
* Purpose Review C++
*/

#include <iostream>
#include <string>

// Classes 
#include "validation.h"
#include "shapeCalculations.h"

void DisplayMenu();
//A function to Run the Intger Validation
int RunIntgerValidation(string strUserInput);
double RunDoubleValidation(string strUserInput);

int main(int argc, char* argv[]) {

	string strUserInput = ""; //A string for accepting user input
	bool bExit = false; //Boolen for exiting the program
	int iMenu; //Stores the Integer for the menu option 
	ShapeCalculations shapeCalculations; //the class for shape calculations 
	bool runEquation = false;

	while (!bExit) {


		DisplayMenu();

		//Gets a menu option from the end user
		cin >> strUserInput;

		//Validates the menu option before passing it to iMenu
		iMenu = RunIntgerValidation(strUserInput);

		switch (iMenu)
		{
		case 1: //Enters the first case if the user entered 1
			cout << "Caluation for the Hypotenuse of a Triangle" << endl;
			
			cout << "Enter the value of SideA of the Triagle: ";
			//Promotes the user to enter the valu for Side A
			cin >> strUserInput;
			//Validates the double value for Side A before passing onto the Shape Calculations class.
			shapeCalculations.setTriangleSideA(RunDoubleValidation(strUserInput));

			cout << "Enter the value of SideB of the Triagle: ";
			//Promotes the user to enter the valu for Side B
			cin >> strUserInput;
			//Validates the double value for Side B before passing onto the Shape Calculations class.
			shapeCalculations.setTrinagleSideB(RunDoubleValidation(strUserInput));


			//Starts the function for calculating the Hypotenuse of a Trinagle and displays the results
			
			cout << "The Hypotenusee of a Triangle is: " << shapeCalculations.CalculateHypotenuseofaTriangle() << endl;;

			break;
		case 2:  //Enters the secound case if the user entered 2
			cout << "Caluation for the Area of a Trapezoid" << endl;

			cout << "Enter the value of Base A of the Trapezoid: ";
			//Promotes the user to enter the value for Base A
			cin >> strUserInput;
			//Validates the double value for Base A before passing onto the Shape Calculations class.
			shapeCalculations.setTrapezoidBaseA(RunDoubleValidation(strUserInput));

			cout << "Enter the value of Base B of the Trapezoid: ";
			//Promotes the user to enter the value for Side A
			cin >> strUserInput;
			//Validates the double value for Base B before passing onto the Shape Calculations class.
			shapeCalculations.setTrapezoidBaseB(RunDoubleValidation(strUserInput));

			cout << "Enter the value of Height of the Trapezoid: ";
			//Promotes the user to enter the value for Height
			cin >> strUserInput;
			//Validates the double value for Height before passing onto the Shape Calculations class.
			shapeCalculations.setTrapezoidHight(RunDoubleValidation(strUserInput));

			//The functions is used for calulating the Area of the Trapezoid and the results are displayed 
			cout << "The Area of the Trapezoid is: " << shapeCalculations.CalculateAreaofTrapezoid() << endl;
			break;
		case 3://Enters the third case if the user entered 3
			cout << "Caluation for the Volume of a Rectangle" << endl;

			cout << "Enter the value of hight of the Rectangle: ";
			//Promotes the user to enter the value for hight
			cin >> strUserInput;
			//Validates the double value for hight before passing onto the Shape Calculations class.
			shapeCalculations.setRectangleHight(RunDoubleValidation(strUserInput));

			cout << "Enter the value of length of the Rectangle: ";
			//Promotes the user to enter the value for lenght
			cin >> strUserInput;
			//Validates the double value for lenght before passing onto the Shape Calculations class.
			shapeCalculations.setRectangleLength(RunDoubleValidation(strUserInput));

			cout << "Enter the value of width of the Rectangle: ";
			//Promotes the user to enter the value for Height
			cin >> strUserInput;
			//Validates the double value for Height before passing onto the Shape Calculations class.
			shapeCalculations.setRectangleWidth(RunDoubleValidation(strUserInput));

			//The function is used for calulating the Volume of the Rectangle and the results are displayed
			cout << "The Volume of the Rectangle is: " << shapeCalculations.CalcuateVolumeofRectangle() << endl;
			break;
		case 0:  //Enters the fourth case if the user entered 0
			cout << "Exiting the Application" << endl;

			//Exit becomes true if the user leaves the program
			bExit = true;
			break;
		default:
			cout << "Not a vaild menu option: " + strUserInput << endl;
			break;
		}

		cout << string(3, '\n');
	}

	return 0;
}


// A function for displaying the menu.
void DisplayMenu() {
	cout << "Please enter a number in order to select a option from the menu: " << endl;
	cout << "Option 1: Calculate the Hypotenuse of a Triangle." << endl;
	cout << "Option 2: Calculate the Area of a Trapezoid" << endl;
	cout << "Option 3: Calculate the Volume of a Rectangle" << endl;
	cout << "Option 0: Press 0 to exit the Application" << endl;
}


// Checks to see if the usr as entered an Intger.
int RunIntgerValidation(string strUserInput) {

	//Declares the class for validation.  
	Validation validation;

	//Stores the input once verified.  
	int iUserInput = -1;
	//Stores the check for validating input
	bool bValidInput = false;

	//  Gose through the loop until it gets a valid Intger that is greater then 0
	do {

		//Checks to make sure th user has entered a valiled Intger
		if(validation.ValidateInt(strUserInput)) {

			//Stores the value in iUserInput
			iUserInput = stoi(strUserInput);

			//Checks to make sure the value is greather then or equal to 0
			if (iUserInput >= 0) {

				//If this is the case the input is valid
				bValidInput = true;
			}
		}
		// Otherwise it promotes the user to 
		else
		{
			//Promotes the user a valid Integer 
			cout << "Please enter a valid Integer" << endl;
			//Gets the input from the end user
			cin >> strUserInput;
		}

	} while (!bValidInput);

	return iUserInput;
}

//Validates that the end user entered a double and that its is not a negative  
double RunDoubleValidation(string strUserInput) {
	Validation validation;

	//Stores the input once verified
	double dUserInput = 0;

	//Boolen that starts off as false
	bool bValidinput = false;

	//Goes through the loop unitl it gets a valid float that is higher then 0.
	do {
		if (validation.ValidateDouble(strUserInput)) {
			dUserInput = stod(strUserInput);
			if (validation.ValidatePostive(dUserInput)) {
				bValidinput = true;
			}
			else {
				//Promotes the user for a valid input if the value is 0 or below
				cout << "Please enter a valid float value that is greather then 0." << endl;
				//Gets the input from the end user
				cin >> strUserInput;
			}
		}
		else
		{
			//Promotes the user for a valid double value
			cout << "Please enter a valid double value and the value must be greater then 0" << endl;
			//Gets the input from the end user
			cin >> strUserInput;
		}
	} while (!bValidinput);

	return dUserInput;
}

