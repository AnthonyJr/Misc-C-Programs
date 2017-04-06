#include <iostream>
using namespace std;
double average(double& totAl, doublet& nog)
int main(){
	int numOfGrades;
	double grade, total;
	total = 0;
	cout << " hello, enter the number of grades: " << endl;
	cin >> numOfGrades;
	for (int i = 0; i < numOfGrades; i++){
		cout << " enter a numeric grade 1-100: " << endl;
		cin >> grade;
		total = grade  + total;}
	double answer =average(total,numOfGrades);
	cout << " the total is " <<  answer << endl;

return 0;
}
double average(double totAl,int nog)
{
double avg;
avg = totAl / nog;
return avg;
}
