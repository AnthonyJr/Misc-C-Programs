#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int cof, oj, tea, coke,choice, counter;
	cof = 0;
	oj = 0;
	tea = 0;
	coke = 0;
	counter = 0;
	do {
		cout << "Please input the favorite beverage of person" << counter 
		<< endl;
		switch (choice){
			case 1:  cof ++;
			break;
			case 2:tea ++;
			break;
			case 3: coke++;
			break;
			case 4: oj++;
			break;
			default: cout <<"error";
			break; 
		counter ++;
  	} while (choice != -1);
}}}


