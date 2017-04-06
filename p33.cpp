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

int readStudentFile(int myArray[row][column]);
int inputStudentFile(int myArray[row][column], int recordCount);
void outputStudentRecords();
char response;

int main()
{
    int rowCount;
    int total;
    int classArray[0][column];
    cout << " hello, would you like to read from a file? y/n" << endl;
    cin >> response;
    if (response == 'y'){
        rowCount =readStudentFile(classArray);
    }
    cout << " next part, would you like to input some records? y/n " << endl;
    cin >> response;
    if (response == 'y'){
         total = inputStudentFile(classArray, rowCount);
    }
   
        

    
}
//////////////////////////////////////////////////////////////////////////////////
int readStudentFile(int myArray[row][column]){
    
    ifstream infile;
    int recordCount = 0;
    int record = 0;
    infile.open("/Users/AnthonySnow/Desktop/classScores.txt");
    bool ans = infile.eof();
    if (ans == 0) {
        while (!infile.eof()) {
            for (int i = 0; i <= 40 && !infile.eof(); i++) {
                for (int j = 0; j <= 2; j++){
                    infile >> myArray[i][j];
                    cout << myArray[i][j] << endl;
                    record++;
                    recordCount = record / 3 - 1;
                    
                }
                
                
            }
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
    return recordCount;
}



///////////////////////////////////////////////////////////////////////////////////




