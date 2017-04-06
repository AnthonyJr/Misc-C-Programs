
#include <iostream>
using namespace std;
int  sum(double a, double b);
int main()
{

	double average,numOfGrades, total, gradeNum, grade,a,b,ans;
	gradeNum = 0;
	total = 0;
	cout << " how many grades do you have ? " << endl;
	cin >>  numOfGrades;
	while (gradeNum <= numOfGrades) {
		cout << " enter grade # " <<  ":" << endl;
		cin >> grade ; 
		total = total + grade;
	//	average = sum(total,numOfGrades);
		gradeNum++;	}
	average = sum(total,numOfGrades);
//	average = total  / numOfGrades;
	if (average >= 90)
	{
		cout << " the student got A " << endl;
	}
	else if (average >= 80)
	{
		cout << " the Student got a B " << endl;
	}
	else if (average >= 70)
	{
		cout << " The student got an D " << endl;
	}
	else if (average >= 60)
	{
		cout << " the Student has an E? " << endl;
	}
	else 
	{
		cout << " he student has an F " << endl;
	}
	return 0;
}
int sum(double a,double b)
{
double ans = a/b;	
return ans;
}


