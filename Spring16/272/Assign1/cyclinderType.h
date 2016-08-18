
/*
	cylinderType.h
	Maria Loza
	CSCI 272 Section 5527
	Created: 1 February 2016
	Due Date: 7 February 2016
	Modified Date: 17 February 2016
				   19 February 2016
				   20 February 2016
				   21 February 2016
*/

#include "circleType.h"

class cylinderType : public circleType
{
public:
	//accessors
	//remember: accessors just grab the info. 
	//they do NOT change the member/instance variables.
				//double getRadius(); //NOT needed since it comes from circleType
	double getHeight();

	//mutators
	//changes variables
				//void setRadius(double newRadius); //NOT needed since it comes from circleType
				//void setHeight(double newHeight);
	void setDimension(double newRadius, double newHeight);

	//constructors
	cylinderType(); //default constructor
	cylinderType(double newRadius, double newHeight); //allows the coder to insert their own dimensions

	//other functions
	//accessors
	void printVol();
	void printSA();
	//mutators
	double calcVol();
	double calcSA();



private:
	//instance variables
	//variables can be either decimals or whole numbers.
	//double will be used to cover both.
	double height; //ht of cylinder
				//double radius; //radius of the cylinder's base
	


};
