#include<iostream>
using namespace std;
int main()
{
	int day, month, year;

	cout << "Enter the day: ";
	cin >> day;
	cout << "Enter the month: ";
	cin >> month;
	cout << "Enter the year: ";
	cin >> year;
	cout << endl;
	cout << "Today's date is " << day << "/" << month << "/" << year;

	return 0;
}