//Lab 3 Part 2
//Anthony Snow
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int num, number;
	float cost;
	char beverage;


	bool validBeverage;
	cout <<fixed << showpoint <<setprecision(2);
	do
	{
		cout << endl << endl;
		cout <<"Hot beverage Menu" <<endl << endl;
		cout <<" A: Coffee		$1.00"<<endl;
		cout <<" B: Tea			.75" <<endl;
		cout << "C: Hot Chocolate	$1.25"<<endl;
		cout <<" D: Capuccino		$2.50"<< endl << endl << endl;
		cout << "Ente the beverage a,b,c or you you desire" << endl;
		cout << "enter e o exit program"<< endl << endl;
		cin>> beverage;
		switch(beverage)
		{
			case 'a': 
			case 'A':
			case 'b':
			case 'B':
			case 'c':
			case 'C':
			case 'd':	
			case 'D': validBeverage = true;
				break;
			default: validBeverage = false;}
		if (validBeverage == true){
			cout <<"how many cups would you like?\n";
			cin >> number;
		}
		switch(beverage){
			case 'a':
			case 'A': cost = number *1.0;
			cout<< "the total cost is $" << cost << endl;
			break;
			//
			case 'b':
			case 'B': cost = number * 1.25;
			cout << "the total cost is $" << cost <<endl;
			break;
			//
			case 'c':
			case 'C': cost = number * .75;
			cout << " the total cost is $" << cost << endl;
			break;
			//
			case 'd':
			case 'D': cost = number * 2.50;
			cout << " total cost is $"<< cost << endl;
			//
			case 'e':
			case 'E': cout <<"Please come again" << endl;
				break;
			default: cout << "inaalid selection";}
			}while  (validBeverage != 'e' || validBeverage !=  'E');
		return 0;
};
