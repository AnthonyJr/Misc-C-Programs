#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int randomNum, guess, etc;
	char  choice;
	cout <<" do you want to play?" << endl;
	cin >> choice;
	do {
		randomNum = rand() % 100 +1;
		cout <<" what would you like to guess?" << endl;
		cin >> guess;
		if (guess == randomNum){
			cout <<" you got it correct!"<< endl;
			etc +=1}
		else {
			cout <<"you got it wrong!!"<< endl;
			cout <<"answer was " << randomNum << endl;}
	} while (choice !='q');
	return 0;
}


