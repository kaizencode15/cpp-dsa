#include <iostream>
#include <climits>
using namespace std;

int getMin(int num[] , int n){
    
    int a = INT_MAX;
    
    for ( int i = 0 ; i < n ; i++ ) {
        a = min( a , num[i] );
    }
    //returning min value 
    return a;
}

int getMax(int num[] , int n){
    
    int b = INT_MIN;
    
    for ( int i = 0 ; i < n ; i++ ) {
        b = max( b , num[i] );
    }
    //returning max value 
    return b;
}

int main()
{
    int size;
    cin >> size;
    
    int num[100];
    
    for ( int i = 0 ; i < size ; i ++ ) {
        cin >> num[i];
    }
    
    cout << " maximum value is : " << getMax (num , size) <<endl;
    cout << " minimum value is : " << getMin (num , size) <<endl;

    return 0;
}
