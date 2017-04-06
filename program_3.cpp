//
//  main.cpp
//  programming challenge 3
//
//  Created by Anthony Snow on 11/25/13.
//  Copyright (c) 2013 Anthony Snow. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const int row = 40;
const int column = 3;

int myArray[row][column] = {};
int readStudentFile(int myArray[][column]);
int inputStudentFile(int myArray[][column]);
//float calculateStatistics(
void outputStudentRecords();
char response;

int main()
{
    int classArray[row][column];
    inputStudentFile(classArray);
    for (int i = 0; i < 41; i++) 
       {
        for (int j = 0; j < 3; j++) 
	   {
            cin >> classArray[i][j];
            cout << classArray[i][j];
           }
       }

	int readStudentFile(int myArray[][column]);
}
//////////////////////////////////////////////////////////////////////////////////
int readStudentFile(int myArray[][column]){
    
    ifstream infile;
    int record = 0;
    int recordCount = 0;
    infile.open("classScores.txt");
    bool ans = infile.eof();
    if (ans == 0) {
        while (!infile.eof()) {
            for (int i = 0; i < 40 && !infile.eof(); i++) {
                for (int j = 0; j <= 2; j++){
                    infile >> myArray[i][j];
                    cout << myArray[i][j] << endl;
                    record++;
                    recordCount = (record / 3) -1 ;
                }
            }
        }
    }
    cout << " total number of records is:" << recordCount << endl;
    infile.close();
    return recordCount;
    
}
///////////////////////////////////////////////////////////////////////////////////
int inputStudentFile(int myArray[][column]){
    char response;
    cout << " do you have a student record to input? y/n " << endl;
    cin >> response;
    while (response == 'y') {
        cout << " enter the identifier, test1 and test 2 score " << endl;
	cin >> myArray[column];
        for (int k = 0;  k < 40; k++) 
	{
            for (int l = 0; l <=2; l++) {}
                
        }
        }
    }




///////////////////////////////////////////////////////////////////////////////////

void outputStudentRecords(){
    cout << " STUDENT   TEST 1 TEST 2 " << endl;
    
}


