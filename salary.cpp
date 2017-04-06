#include <iostream>
using namespace std;
int qualify(int years, int salary){
	bool ans ;
	if (years > 2 &&  salary >> 17000){
		ans = 1;}
	else {
		ans = 0;}
	return ans;
}
int main()
{
	int yrs;
	double sal;
	bool final;
	cout << " hello, this program is used to see if you qualify for this  certain job " << endl;
	cout << " " << endl;
	cout << " how many years have you been at your current job ? " << endl;
	cin >> yrs;
	cout << " ok, ok, hard working.... " << endl;
	cout << " how much do you make a year? " << endl;
	cin >> sal;
	final =  qualify(yrs,sal);
	if (final == 1){
		cout << " congrats!! you qualify for the job!!!!! " << endl;}
	else if (final  == 0){
		cout << " ooooh you dont make enough!! " << endl;}
	else {
		cout << " you fucked up somewhere " << endl;}
	return 0;
}

