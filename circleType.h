 
class circleType
{
public:
    void setRadius(double r);
      //Function to set the radius.
      //Postcondition: if (r >= 0) radius = r;
      //               otherwise radius = 0;

    double getRadius();
      //Function to return the radius.
      //Postcondition: The value of radius is returned.

    double area();
      //Function to return the area of a circle.
      //Postcondition: Area is calculated and returned.

    double circumference();
      //Function to return the circumference of a circle.
      //Postcondition: Circumference is calculated and returned.

    circleType(double r);
      //Constructor with a parameter.
      //Radius is set according to the parameter.
      //Postcondition: radius = r;

	circleType(); //default constructor w/o parametes

	//accessor
	void printCircle();

private:
    double radius;
};
