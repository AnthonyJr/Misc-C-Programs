// Programming Challenge #1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float MONTH1, MONTH2, MONTH3,average;
	cout << "enter name of the first month:";
	cin >> MONTH1;
	cout << " enter name for the second month";
	cin >> MONTH2;
	cout << " enter the name for the third month:";
	cin >> MONTH3;
	cout << " enter the average of the three months "; 
	cin >> MONTH1  >> MONTH2 >> MONTH3;
	average = (MONTH1 + MONTH2 + MONTH3) / 3;
	cout << " the average of the three months is " <<  average;
}
