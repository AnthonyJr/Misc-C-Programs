
//
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float num1,num2, num3, average;

	string month1,month2,month3;
	cout <<" hello, enter the first month's name\n";
	cin >> month1; 
	cout << " now enter the average for the first month\n";
	cin >> num1;
	cout << " --------------------------------------------\n";
	cout << "now enter the second month's name\n";
	cin >> month2;
	cout <<" enter the average for the second month\n";
	cin >> num2;
	cout << " -------------------------------------\n";
	cout << " enter the third months name\n";
	cin >> month3;
	cout << " enter the average for the third month\n";
	cin >> num3;
	cout<< " --------------------------------------\n";
	cout << setprecision(2) << fixed;
	average = (num1 + num2 + num3) / 3;
	cout <<  " the average for " << month1 << " , " << month2 << " , and\n ";
	cout << month3 << " is " << average<< " ";
	
return 0;

}
