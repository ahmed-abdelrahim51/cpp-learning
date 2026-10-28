// this program asks the user to enter the length and the width of a
// a rectangle . It calculates the rectangl`s area and displays the value 
// on the screan .
#include <iostream>
using namespace std;
int main()
{
	int length, width, area;
	cout << "this program calculates the area of a ";
	cout << "rectangle.\n";
	cout << "what of the length of a rectangle? ";
	cin >> length;
	cout << "what is the width of a rectangle? ";
	cin >> width;
	area = length * width;
	cout << "the area of rectangle is: " << area << endl;
	return 0;
}