#include <iostream> // import the proper library
using namespace std; // the proper namespace
int main() // set up main
{
	char input;
	cout << " would you like to use this app? " << endl;
	cin >> input;
	do{
		double  numberOfPeople, hoursWorked,wage,total, mon, tues, wed, thurs, frid, pretax; // declare variables
		cout << " how many timehseets are we looking at? " << endl; // ask for number of timehseets to look at
		cin >> numberOfPeople; // input the number
		total = 0; // set accumalator to 0
		for (int i = 0;i < numberOfPeople; i ++) // start the loop
		{		
			cout << " how much are you paid by the hour?" << endl; // ask for payrate
			cin >> wage; // input payrate
			cout << " what days did you work? " << endl; // hours worked
			cin >> mon>> tues >> wed >> thurs >> frid; // input hours worked
			pretax = (mon + tues+ wed+ thurs+ frid) * wage; // calculate indiviual total
			total = pretax + total; // add to master total
		cout << " the total is " << total << endl; // show total  
		} while (input != 'q') 

//	cout << " the total is " << total <<endl; //  show total 
	return 0; // return 0
}}
