#include <iostream>
using namespace std;
int main()
{
	double payrate, mon, tues,wed,thurs,fri,check,total, hours_worked;
	int  number_of_people;
	cout << "how many time sheets are we looking at?";
	cin >> number_of_people;
	total = 0;
	for (int i = 0; i < number_of_people;i++){
		cout <<" how much does employee " << (i) << "get paid?";
		cin >> payrate;
		cout << " how many hours did you work monday?";
		cin >> mon;
		cout <<" how many hours did yo work tuesday?";
		cin >> tues;
		cout << " how many hours did you work wednesday?";
		cin >> wed;
		cout << " how many hourrs did you work thursday?";
		cin >> thurs;
		cout << " how many hours did you work friday?";
		cin >> fri;
		hours_worked = mon + tues + wed + thurs+ fri;
		check = hours_worked * payrate;
		
		total = check + total;
		cout << total;
}}
