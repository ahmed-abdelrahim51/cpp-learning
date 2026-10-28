#include<iostream> // this program uses a type cast to avoid integer division.
using namespace std;
int main()
{
int books;        // number of books to read 
int months;      // number of months spent reading
double permonth;  // Average number of books per month
cout << "How many books do you plan to read? ";
cin >> books;
cout << "How many months will it take you to read them? ";
cin >> months;
permonth = static_cast<double>(books) / months;
cout << "that is " << permonth << "books per month.\n";
return 0;
	
}