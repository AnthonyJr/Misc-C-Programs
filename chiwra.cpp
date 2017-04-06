
#include<iostream>
using namespace std;int gradesTotal(char grades[], int numOfGrades, char categ);

int main()
{
	const int MAX_SIZE = 50;
	char grades[MAX_SIZE];
	
	int numOfGrades, categNo, gradeNo;
	char categories[5] = {'A', 'B','C','D','F'};
	int totalInCateg[5] = {0};
	cout << " how many grades will you enter?";
	cin >> numOfGrades;

	if (numOfGrades < 1 || numOfGrades >50)
	{
		cout << " invalid number of grades.... " << endl;
	}
	else 
	{
		for (gradeNo = 0; gradeNo < numOfGrades; gradeNo++)
		{
			cout << " Enter letter grade for studnet # " << gradeNo +1 << " : " << endl;
			cin >> grades[gradeNo];
		}

		for (int categNo = 0; categNo <5 ; categNo++)
		{
			totalInCateg[categNo]	= gradesTotal(grades,numOfGrades, categories[categNo]);
			cout << " Number of " << categories[categNo] <<  "'s= " << totalInCateg[categNo] << endl;
		}
	}
	return 0;
}
int gradesTotal(char grades[], int numOfGrades, char categ)
{
	int count, gradeCounter = 0;
	for (count = 0; count < numOfGrades; count++)
	{
		if (grades[count] == categ)
		{
			gradeCounter++;
		}
	}
	return gradeCounter;
}
