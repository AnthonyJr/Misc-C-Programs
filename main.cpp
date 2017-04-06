//
//  main.cpp
//  programming challenge 3
//
//  Created by Anthony Snow on 11/25/13.
//  Copyright (c) 2013 Anthony Snow. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
const int row = 40;
const int column = 3;
// function protoypes
int readStudentFile(int myArray[][column]);
int inputStudentFile(int myArray[][column], int recordCount);
void calculateStatistics(int myArray[][column] ,int recordCount, double& avg1, double& avg2, int& min1, int& min2, int& max1, int& max2);
void outputStudentStatistics();
char response;

int main()
{
    // create variable prototypes
    int highestGrade1, highestGrade2, lowestGrade1, lowestGrade2,rowCount;
    double averageTest1, averageTest2;
    int classArray[row][column];
    cout << " hello, would you like to read from a file? y/n" << endl;
    cin >> response;
    if (response == 'y'){
        rowCount =readStudentFile(classArray);
    }
    cout << " would you like to input some records? y/n " << endl;
    cin >> response;
    if (response == 'y'){
        rowCount = inputStudentFile(classArray, rowCount);
    }
    cout << " you have added " << rowCount <<  "   records " << endl;
    calculateStatistics(classArray, rowCount, averageTest1,averageTest2, lowestGrade1,lowestGrade2, highestGrade1, highestGrade2);
   
    
}
//////////////////////////////////////////////////////////////////////////////////
int readStudentFile(int myArray[][column]){
    
    ifstream infile;
    int recordCount = 0;
    infile.open("/Users/AnthonySnow/Desktop/classScores.txt");
    bool ans = infile.eof();
    if (ans == 0) {
        while (!infile.eof()) {
            for (int i = 0; i <= 40 && !infile.eof(); i++) {
                for (int j = 0; j <= 2; j++){
                    infile >> myArray[i][j];
                    cout << myArray[i][j] << endl;
                   
                    
                }
                
                recordCount++;
                
            }
            recordCount = recordCount -1;
        }
        
    }
    
    cout << " total number of records is:" << recordCount << endl;
    infile.close();
    return recordCount;
    
}
///////////////////////////////////////////////////////////////////////////////////
int inputStudentFile(int myArray[][column], int recordCount){
    while (recordCount < 41 && response == 'y') {
        
        cout << " enter the student identifier for " << recordCount << endl;
        cin >> myArray[recordCount][0];
        cout << " enter the student test score for first test " << recordCount << endl;
        cin >> myArray[recordCount][1];
        cout << " enter the second student test score " << recordCount << endl;
        cin >> myArray[recordCount][2];
        recordCount++;
        cout << " would you like to add another record ? " << endl;
        cin >> response;
        if (response == 'y'){
            cout << " ok " << endl;
        }
        else {
            break;
        }
    }
    cout << " now you have " << recordCount << "records" << endl;
    return recordCount;
}



///////////////////////////////////////////////////////////////////////////////////
void calculateStatistics(int myArray[][column] ,int recordCount, double& avg1, double& avg2, int& min1, int& min2, int& max1, int max2){
    min1 = myArray[0][1];
    min2 = myArray[0][2];
    max1 = myArray[0][1];
    max2 = myArray[0][2];
    // minimums
    for (int i = 0; i <=recordCount; i++) {
        if (myArray[i][1] <min1) {
            min1 = myArray[i][1];
        }
        if (myArray[i][2] < min2) {
            min2 = myArray[i][2];
    // maximums
        }
        if (myArray[i][1] > max1) {
            max1 = myArray[i][1];
        }
        if (myArray[i][2] > max2) {
            max2 = myArray[i][2];
        }
    // averages
        avg1 = myArray[i][1] + avg1;
        avg2 = myArray[i][2] + avg2;
    
        
    }
    
    avg1 = avg1 / recordCount;
    avg2 = avg2 / recordCount;
    
    
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void outputStudentStatistics(){
    
}