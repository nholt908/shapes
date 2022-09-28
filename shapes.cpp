// Your Name: Nicole Holt
// Date: 09/19/2022
// Program Title:
// Program Description:

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants

const double PI = 3.14;

int main()
{

	// Variable declaration

	int choice;
	double height, width, area, radius;

	//Program title and description for the user

	cout << "MENU TEMPLATE with IF ELSE" << endl << endl;

	// User input

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - Calculate the area of a rectangle" << endl;
	cout << "2 - Calculate the area of a circle" << endl;
	cout << "3 - Calculate the area of a triangle" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;
	cout << endl;

	// Calculations

	// Output to the screen

	if (choice == 1)
	{
		cout << "Perform task #1 : Rectangle area" << endl;
		cout << "What is the height in inches?" << endl;
		cin >> height;
		cout << endl;

		cout << "What is the width in inches?" << endl;
		cin >> width;
		cout << endl;

		// Calculation

		area = height * width;

		// Output

		cout << "The area of the rectangle is: " << area << " inches squared" << endl;
	}
	else if (choice == 2)
	{
		cout << "Perform task #2 : Circle area" << endl;
		cout << "What is the radius in inches?" << endl;
		cin >> radius;
		cout << endl;

		// Calculation

		area = PI * radius * radius;

		// Output

		cout << "The area of the circle is: " << area << " inches squared" << endl;
	}
	else if (choice == 3)
	{
		cout << "Perform task #3 : Triangle area" << endl;
		cout << "What is the height in inches?" << endl;
		cin >> height;
		cout << endl;

		cout << "What is the width in inches?" << endl;
		cin >> width;
		cout << endl;

		// Calculation

		area = height * width * 0.5;

		// Output

		cout << "The area of the triangle is: " << area << " inches squared" << endl;
	}
	else
		cout << "Input error; program terminating" << endl;

	return 0;
}