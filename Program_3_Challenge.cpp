//
//  main.cpp
//  Arrays
//
//  Created by Anthony Snow on 11/19/13.
//  Copyright (c) 2013 Anthony Snow. All rights reserved.
//
#include <string>
#include <iostream>
using namespace std;
const int row = 40;
const int column = 3;
int readStudentFile(int studentRecordsArray[row][column]);
int inputStudentRecords(int studentRecordArray[row][column], int recordCount);
int calculateStatistics(int testArray1, int testArray2);
int outputStudentRecords(int studentRecordArray, int testavg1, int testavg2, int min1,
	int min2, int max1, int max2);
int main() {
	// leave this shit blank for a while
}
 int readStudentFile(int studentRecordsArray[row][column]){
	for (int i = 0; i < row ;i ++){
		for (int j = 0; i < column; j++){
			cout << " enter the student ID, followed by test 1 and test 2 scores " << endl;
			cin >> studentRecordsArray[i][j];
			cout << studentRecordsArray[i][j] << endl;
			cout << studentRecordsArray[i][j] << endl;
			cout << studentRecordsArray[i][j] << endl;\
			return studentRecordsArray[i][j];
		}

	}	
}
