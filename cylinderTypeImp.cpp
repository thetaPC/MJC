#ifndef H_CYLINDERTYPE
#define H_CYLINDERTYPE

/*
	cylinderTypeImp.cpp
	Maria Loza
	CSCI 272 Section 5527
	Created: 1 February 2016
	Due Date: 7 February 2016
	Modified Date: 17 February 2016
				   19 February 2016
				   20 February 2016
				   21 February 2016
*/

#include <iostream>
#include "cylinderType.h"
#include "math.h"

using namespace std;

/*
volume = pi*radius^2*ht
sa = 2*pi*radius(rad + ht)

double cylinderType::getRadius()
{
	return circleType::getRadius(); //prompts the current radius
	//return radius; 
} //end getRadius()
*/

double cylinderType::getHeight()
{
	return height; //prompts the current height
} //end getHeight()


void cylinderType::setDimension(double newRadius, double newHeight)
{
	circleType::setRadius(newRadius); //establishes a new radius
	height = newHeight; //establishes a new height
}

/*
void cylinderType::setRadius(double newRadius)
{
	circleType::setRadius(newRadius); //overwrites the old radius with a new radius
	//radius = newRadius; 
} //end setRadius()


void cylinderType::setHeight(double newHeight)
{
	height = newHeight; //overwrites the old ht w/ a new ht
} //end setHeight()
*/

cylinderType::cylinderType()
{
				//radius = 0; //upon execution, rad will be automatically be 0 ---------
	height = 0; //upon execution, ht will be automatically be 0
				//circleType::circleType();
} //end default constructor 


cylinderType::cylinderType(double newRadius, double newHeight) //establishes new dimensions aka ht and radius
{
				//setRadius(newRadius); ------------
				//circleType::circleType(newRadius);
	cylinderType::setDimension(newRadius, newHeight);
	
} //end constructor with parameters

double cylinderType::calcVol()
{
	return (circleType::area() * height); //volume will be calculated
} //end calcVol

double cylinderType::calcSA()
{
	return (circleType::circumference() * (circleType::getRadius() + height)); //surface area will be calculated
} //end calcSA()

void cylinderType::printVol()
{
	cout << "Volume: " << calcVol() << "\n"; //volume will be displayed
} //end printVol()

void cylinderType::printSA()
{
	cout << "Surface area: " << calcSA() << "\n"; //s.area will be displayed
} //end printSA()

#endif //end #ifndef