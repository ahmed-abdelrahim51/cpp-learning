#include <iostream>
using namespace std;
int main()
{
	float length, width ,area;
	cout << "Enter the length: ";
	cin >> length;
	cout << "Enter the width: ";
	cin >> width;
	area = length  * width;
	cout << "the area of the rectangle is: " << area << endl;
	return 0;
}