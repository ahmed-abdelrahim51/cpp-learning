#include <iostream>
using namespace std;
int main()
{
	// constsns
	const double PI = 3.14159;
	const double DIAMETER = 10.0;
	// variable to hold the circumference
	double circumference;
	//calculate the circumference
	circumference = PI * DIAMETER;
	cout <<"the circumferece is: " << circumference << endl;
	return 0;
}