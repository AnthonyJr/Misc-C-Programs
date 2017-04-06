#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int cof, oj, tea, coke,choice, counter,error;
	cof = 0;
	oj = 0;
	tea = 0;
	coke = 0;
	counter = 0;
	error = 0;
	do {
		cout << "what is your choice?";
		cout << " coffee is 1";
		cout << " tea is 2";
		cout << " coke is 3";
		cout << " oj is 4";
		
		cin >> choice;
		switch (choice){
			case 1:  cof ++;
			break;
			case 2:tea ++;
			break;
			case 3: coke++;
			break;
			case 4: oj++;
			break;
			default: error++;
			break; 
                }
		counter ++;
  	} while (choice != -1);
	cout <<" the total number for coffee is:             " <<cof<< endl;
	cout <<" the total number for  tea is:               " << tea << endl;
	cout <<" the total number for orange juice is:       "<< oj << endl; 
	cout <<" the total number for coke is:               " << coke << endl;
	cout <<" the total number of error is:               " << error << endl;}


