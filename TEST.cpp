#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
const int MAX = 40;
int readStudentFile(int studentID[],int test1[],int test2[],int& count)
{
count=0;
ifstream infile("classScores.txt");
if(!infile)
{
cout <<"unable to open file so exiting from program ." << endl;
return count;
}
while(!infile.eof())
{
infile >> studentID[count] >> test1[count] >> test2[count];
count++;
if(count==40) break;
}
infile.close();
return count; // return no of records.
}
int inputStudentRecords(int studentID[],int test1[],int test2[],int& count)
{
if(count==40)
{
cout <<"Array is full. " << endl;
return count;
}
char response = 'y';
while(response=='y')
{
cout << "Do You have student record to input :";
cin >> response;
if(response=='y')
{
cout <<"Enter Identifier , test1 score and test2 score for the student:";
cin >> studentID[count] >> test1[count] >> test2[count];
count++;
}
}
return count;
}

void calculateStatistics(int test1[],
int test2[],
int count,
double& avg_test1,
double& avg_test2,
double& min_test1,
double& min_test2,
double& max_test1,
double& max_test2)

{
double total_test1=static_cast<double> (test1[0]);
double total_test2=static_cast<double> (test2[0]);
min_test1 = test1[0];
min_test2 = test2[0];
max_test1 = test1[0];
max_test2 = test2[0];
for(int i=1; i<count; i++)
{
if(test1[i] < min_test1) min_test1 = test1[i];
if(test2[i] < min_test2) min_test2 = test2[i];
if(test1[i] > max_test1) max_test1 = test1[i];
if(test2[i] > max_test2) max_test2 = test2[i];
total_test1 = total_test1 + test1[i];
total_test2 = total_test2 + test2[i];
}
avg_test1 = total_test1/count;
avg_test2 = total_test2/count;
}

void outputStudentRecords(int studentID[],
int test1[],
int test2[],
int count,
double& avg_test1,
double& avg_test2,
double& min_test1,
double& min_test2,
double& max_test1,
double& max_test2)
{
cout << "STUDENT \tTEST 1 \t TEST 2 " << endl;
cout << "------- \t------ \t ------ " << endl;
for(int i=0; i<count; i++)
{
cout << studentID[i] << "\t\t" << test1[i]<< "\t\t" << test2[i] << endl;
}
cout << "High Score" << "\t" << max_test1<< "\t\t" << max_test2 << endl;
cout << "Low Score" << "\t" << min_test1<< "\t\t" << min_test2 << endl;
cout << "Average" << "\t\t" <<fixed << setprecision(1) << avg_test1<< "\t\t" << fixed << setprecision(1) <<avg_test2 << endl;
}

int main()
{
int studentID[MAX];
int test1[MAX];
int test2[MAX];
int count;
double avg_test1;
double avg_test2;
double min_test1;
double min_test2;
double max_test1;
double max_test2;
count = readStudentFile(studentID,test1,test2,count);
count = inputStudentRecords(studentID,test1,test2,count);
calculateStatistics(test1,test2,count,avg_test1,avg_test2,min_test1,min_test2,max_test1,max_test2);
outputStudentRecords(studentID,test1,test2,count,avg_test1,avg_test2,min_test1,min_test2,max_test1,max_test2);


return 0;
}
