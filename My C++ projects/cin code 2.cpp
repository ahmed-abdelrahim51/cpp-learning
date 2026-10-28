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
	cout << "Enter the length and width of the rectangle ";
	cout <<"separated by a space.\n";
	cin >> length >> width;
	area = length * width;
	cout << "the of the rectangle is: " << area << endl;
	return 0;
}