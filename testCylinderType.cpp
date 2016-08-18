/*
	Main .cpp
	Maria Loza
	CSCI 272 Section 5527
	Created: 1 February 2016
	Due date: 7 February 2016
	Modified Date: 17 February 2016	
				   19 February 2016
				   20 February 2016
				   21 February 2016
*/

/*
Problem (my understanding):
The problem describes a need to find the components of a cylinder using the class circleType
as an example. circleType would have to be modified to print the radius, area, and circumference.
The problem asks for the class cylinderType. The problem seeks for the properties and some operations.
The operations are the following:
									calculate volume
									print volume
									calculate surface area
									print surface area
									set height
									set radius
									set center of the base (not sure what that means)
									allow testing of these operations

Solution:
Properties will have to be found: the radius and the height. Several accessors, mutators, and
constructors will be needed. I am still not 100% sure how to properly set this oop w/o using
notes and the book. But after reviewing the txtbook, I feel more confident about approaching 
this problem compared to last semester.
*/

#include <iostream>
#include "cylinderType.h"

using namespace std;

int main()
{
	//variables
	cylinderType cylinder1(8, 24);
	cylinderType cylinder2; //no radius and ht
	cylinderType cylinder3; //for user input
	double rad;
	double ht;

	//displaying the properties of cylinder1 and s.area and vol
	cout << "Cylinder1 \n";
	//important to self: to view radius/ht by .get, must have a cout
	cout << "Radius: " << cylinder1.getRadius() << "\n";
	cout << "Height: " << cylinder1.getHeight() << "\n";
	//important to self: to view .print, do not use cout
	cylinder1.printSA();
	cylinder1.printVol();
	cout << "\n";

	//displaying the properties of cylinder2 and s.area
	cout << "Cylinder2 \n";
	cout << "Radius: " << cylinder2.getRadius() << "\n";
	cout << "Height: " << cylinder2.getHeight() << "\n";
	cylinder2.printSA();
	cylinder2.printVol();
	cout << "\n";

	//resetting the rad and ht for cylinder2
//	cylinder2.setRadius(5);
//	cylinder2.setHeight(10);
	cylinder2.setDimension(5, 10);
	
	//testing out that the new rad and ht calculates and prints
	cout << "Cylinder2 \n";
	cout << "Radius: " << cylinder2.getRadius() << "\n";
	cout << "Height: " << cylinder2.getHeight() << "\n";
	cylinder2.printSA();
	cylinder2.printVol();
	cout << "\n";

	//prompt user to input their own radius and height
	cout << "Enter the radius: ";
	cin >> rad;
	cout << "Enter the height: ";
	cin >> ht;
	cout << "\n";

	//giving cylinder3 new numbers from user for rad and ht
//	cylinder3.setRadius(rad);
//	cylinder3.setHeight(ht);
	cylinder3.setDimension(rad, ht);

	//testing out that the new rad and ht calculates and prints for user
	cout << "Cylinder3 \n";
	cout << "Radius: " << cylinder3.getRadius() << "\n";
	cout << "Height: " << cylinder3.getHeight() << "\n";
	cylinder3.printSA();
	cylinder3.printVol();








	return 0;
} //end main

/*
Notes to self:
Make sure to not duplicate a default constructor with a constructor that already has a parameter equaling 0.
This will cause many useless headaches. This assigment should have been way easier, but of course I had to
over complicate it by not taking the time to reading the already made code for circleType. Don't rush.

*/