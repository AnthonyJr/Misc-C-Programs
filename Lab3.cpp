// this program tests whether or not initalizaed value
// is equal o a value input by the user
// Anthony Snow
#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	num2 = 5;
	cout <<" Please enter integer " << endl;
	cin >> num1;
	cout << " num 1 =" << num1 << " and num2 = " <<num2 << endl;
	if (num1 == num2){
		cout << "hey thats a coincidence!" << endl;}
	if (num1 != num2){
		cout << "the values are not the same " << endl;}
	return 0;
}
