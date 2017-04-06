#include <iostream>
using namespace std;

void swapNumbers ( int& number1, int& number2);

int main()
{
	int first, second;
	
	cout << " enter the first number " << endl;
	cin >> first;	
	cout << " enter the second number " << endl;
	cin>> second;

	swapNumbers( first,second);
	cout << "after swapping, the numbers, the placmement is now  "  << first  <<  " and "  << 
	second << endl;

	return 0;
}
void swapNumbers(int& number1, int& number2)
{
	int temp;
	temp = number1;
	number1 = number2;
	number2 = temp;
} 
