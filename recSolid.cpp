/*

Daphne Saintfleur


recSolid.cpp


Prompt user for height,length, & width of a rectangle,
calculate its volume & surface area, and display the result
*/


// Header Files
#include <iostream>
#include "recSolid.h"
using namespace std;

int main()
{
	// Variables
	double height, length, width, volume, area; 

	// Intro
    cout << "Rectangle Solid Geometry App ..." << endl;

    // Prompt user for height,length, and width
	cout << "Please enter rectangle's height: ";
	cin >> height;
	cout << "                         length: ";
	cin >> length;
	cout << "                         width: ";
	cin >> width;

	// Calculate Volume
		volume = length * width * length;

	// Display result
	cout << "The volume is " << volume << " units " << endl;

	// Calculate surface area
	area = 2 * length * height + 2 * width * height + 2 * width * length; 

	// Display result
	cout << "The surface area of the rectangle is " << area  << " units " << endl;

	return 0;
	
	}