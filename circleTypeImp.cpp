#ifndef H_CIRCLETYPE
#define H_CIRCLETYPE

//Implementation File for the class circleType
 
#include <iostream>
#include "circleType.h"

using namespace std;


void circleType::setRadius(double r)
{
    if (r >= 0)
        radius = r;
    else
        radius = 0;
}


double circleType::getRadius()
{
    return radius;
}

double circleType::area()
{
    return 3.1416 * radius * radius;
}

double circleType::circumference()
{
    return 2 * 3.1416 * radius;
}

circleType::circleType(double r)
{
    setRadius(r);
}

circleType::circleType()
{
	radius = 0;
}

void circleType::printCircle()
{
	cout << "Radius: " << radius << "\nArea: " << area()
		<< "\nCircumference: " << circumference() << "\n";
}

#endif //end #ifndef