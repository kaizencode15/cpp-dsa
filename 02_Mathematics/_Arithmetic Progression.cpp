#include <iostream>
using namespace std;

int ap ;
 
int arithmeticProgression (int n ) {
   
    ap = 3*n+7 ;
    
    return ap ;
}

int main()
{
    int n ;
    cin >> n;
    
    arithmeticProgression(n);
    
    cout << "arithmeticProgression is : " << ap << endl;
}
