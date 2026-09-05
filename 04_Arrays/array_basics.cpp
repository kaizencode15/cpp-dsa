#include <iostream>
using namespace std;

//hold
void printArray () {
    
}

int main () {
    
    //declare
    int number[15];
    
    //accessing an array 
    cout << "value at 14 index : " << number[14]<< " " << endl;
    
    //initialising an array
    int second[3] = { 5 , 17 , 11 };
    
    //accessing an array 
    cout << "value at 2 index : " << second[2] << " " << endl;
    
    cout << " everything is fine " << endl;
    
    int third[15] = { 2 , 7 };
    
    int n = 15;
    cout << "printing an array :  ";
    
    for ( int i =0 ; i < n ; i++) {
        cout << third[i] << " " ;
    } cout << endl;
    
    int fourth[14] = {1 };
    
    int m = 14;
    cout << "printing an array :  ";
    
    for ( int i =0 ; i < m ; i++) {
        cout << fourth[i] << " " ;
    }
}
