#include <iostream>
#include <string>
using namespace std;
void displayMessage(string user);
int main()
{
	string name;
	cout << " hello, what is your name?:" << endl;
	cin>> name;
	displayMessage(name);
	return 0;
}

void displayMessage(string user)
{
	cout << " hello " << user << " how are you doing todday? " << endl;
}

