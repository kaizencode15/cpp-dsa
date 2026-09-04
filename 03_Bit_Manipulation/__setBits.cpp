#include <iostream>
using namespace std;

int setBitsb ( int b ) {
    int count = 0 ;
    while ( b != 0 ){
        if (b&1){
          count++;  
        }
        b = b>>1;
    }
    return count;
}
int setBitsa ( int a ) {
    int count = 0 ;
    while ( a != 0 ){
        if (a&1){
          count++;  
        }
        a = a>>1;
    }
    return count;
}
int main() {
    int a , b ;
    cin >>a >> b;
    
    int ans1 = setBitsb(b) ;
    int ans2 = setBitsa(a) ;
    
    int ans = ans1 + ans2 ;
    
    cout << "total number of set bit is : " <<ans << endl;
    
    return 0 ;
}
