#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    
    cout << " how many numbers are you searching through? " << endl;
    cin >> int  var;
    const int num = var;
    int array[num] = {0};
    for (int j = 0; j < num; j++){
        cout << " enter number " << array[j+1] << ":"  << endl;
	cin >> array[i];}
    for (int i = 0; i < num; i++){
        if  (array[i] == 95){
            cout << " this number is  " << array[i] <<  endl;}
        else {
            cout << " no " << endl;
	}
    }
}
