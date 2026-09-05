#include <iostream>
using namespace std;

//hold
void printArray ( int arr[] , int size ) {
    
    cout << "printing the array : " << endl;
    //print the array
    for ( int i = 0 ; i < size ; i ++ ) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "printing is DONE " << endl ;
}

int main () {
    
    //declare
    int number[15] ;
    
    //accesing an array
    cout << "value at 14 index : " << number[14] <<endl;
    
    //cout << "value at 20 index : " << number[20] <<endl;
    
    //inilitation an array
    int second[3] = { 5 , 7 , 11 };
    
    //accesing an array
    cout << "value at 2 index : " << second[2] <<endl;
    
    //inilitation an array
    int third[13] = { 2 , 7 };
    
    int n = 13;
    printArray( third , 13 );
    
    //inilitation an array
    int fourth[10] = {0};
    
    n = 10;
    printArray( fourth , 10 );
    
    cout << "everything is fine " << endl;
    
    return 0 ;
    
}
