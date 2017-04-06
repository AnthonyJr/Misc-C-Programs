#include <iostream>
using namespace std;
int main(){
	int numOfLines, line, asterisk, spaces;
	cout << "how many lines should the pyramid have?";
	cin >> numOfLines;
	for (line = 1; line <= numOfLines; line ++){
		for (spaces = 1; spaces <= numOfLines; spaces++)
{
			cout <<" ";}
		for (asterisk = 1; asterisk <= (line*2-1); asterisk++)
{			
			cout <<"*";}
		cout <<endl;}
	return 0;}		
