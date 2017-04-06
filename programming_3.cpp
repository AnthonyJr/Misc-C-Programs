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
int inputStudentFile(int myArray[][column], int rowCnt);
void outputStudentRecords();
char response;

int main()
{
    int classArray[row][column];
    readStudentFile(classArray);
    
    
}
//////////////////////////////////////////////////////////////////////////////////
int readStudentFile(int myArray[][column]){
    
    ifstream infile;
    int recordCount = 0;
    infile.open("classScores.txt");
    bool ans = infile.eof();
    if (ans == 0) {
        while (!infile.eof()) {
            for (int i = 0; i < 40 && !infile.eof(); i++) {
                for (int j = 0; j <= 2; j++){
                    infile >> myArray[i][j];
                    cout << myArray[i][j] << endl;
                    }
                
                
            }
        }
    }
    recordCount++;
    cout << " total number of records is:" << recordCount << endl;
    infile.close();
    return recordCount;
    
}
///////////////////////////////////////////////////////////////////////////////////
int inputStudentFile(int myArray[][column], int recordCount){
    return 0;
}



///////////////////////////////////////////////////////////////////////////////////

void outputStudentRecords(){
    cout << " STUDENT   TEST 1 TEST 2 " << endl;
    
}


