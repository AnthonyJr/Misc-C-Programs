// This program reads data from a file into an array. 
#include <iostream> 
#include <fstream> 
using namespace std; 
 
int main() 
{ 
 const int ARRAY_SIZE = 100; // Array size 
 int intArray[ARRAY_SIZE]; // Array with 100 elements here 
 int count = 0; // Loop counter variable 
 ifstream inputFile; // Input file stream object 
 
 inputFile.open("numbers.txt"); // Open the file. 

 // Read the numbers from the file into the array. 
 // After this loop executes, the count variable will hold 
 // the number of values that were stored in the array. 
inputFile >> intArray[count];  // read first number from file into array here 
 while (count < ARRAY_SIZE && !inputFile.eof() ) 
 { 
 count++; 
inputFile>> intArray[count];  // read a number from file into array 
} 
 
 // Close the file. 
 inputFile.close(); 
 
 // Display the numbers read. 
 cout << "NUMBER READ FROM FILE " << endl; 
 for (int index = 0; index < count; index++) 
 { // display an array element here 
 cout << " Number" << index << ":" << intArray[index] << endl; 
 } 
 cout << endl; 
 return 0; 
}
