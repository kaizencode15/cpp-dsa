#include <iostream>
using namespace std;

// Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8...
// This program calculates the Fibonacci number using a for loop.

int a = 0 ;
int b = 1 ;
int ans ;

int fibonacciSeries ( int n ) {
    for ( int i = 3 ; i <= n ; i++ ) {
        
        ans = a + b ;
        a = b ;
        b = ans ;
    }
    return ans ;
}

int main()
{
    int n ;
    cin >> n ;
    
    fibonacciSeries(n);
    
    cout << "fibonacci number is : " << ans << " " ;

    return 0;
}
