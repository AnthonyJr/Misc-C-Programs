// anthon
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b; // th smaller sides of a triangle
	float hyp; // the hypotenuse
	cout << "Please input the valus of the two sides";
	
	cin >> a >> b;
	hyp = sqrt(pow(a,2) + pow(b,2));
	cout << " the sides of the right triangle are  " << a << " and " << b << endl;
	cout << "the hypothesuse is " << hyp << endl;
	return 0;
}
