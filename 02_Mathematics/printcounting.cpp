#include <iostream>
using namespace std;

//function
void printcounting( int n ) {
    //function body
    for ( int i = 1 ; i <= n; i++ ) {
        cout << i << " " ;
    }
    cout << endl;
}

int main (){
    int n ;
    cin >> n ;
    
    printcounting(n);
}
