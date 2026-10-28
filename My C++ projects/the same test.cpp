#include <iostream>
using namespace std;
int main()
{
	float grade1 , grade2 , grade3 , sum , average;
	cout << "Enter grade1: ";
	cin >> grade1;
	cout << "Enter grade2: ";
	cin >> grade2;
	cout << "Enter grade3: ";
	cin >> grade3;
	sum = grade1 + grade2 + grade3;
	cout << "the sum of the grades is: " << sum << endl;
    average = sum / 3;
	cout << "the average is: " << average << endl;
	return 0;
	
}