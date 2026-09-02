#include <iostream>
using namespace std ;
int main()
{ 
    // calculator
    
    int a , b;
    
    cout << "enter the number a : " << endl;
    cin >> a ;
    
    cout << "enter the number b : " << endl;
    cin >> b;
    
    char op;
    cout << "operation is : " << endl;
    cin >> op ;
    
    switch ( op ) {
        case '+' : cout << a+b << endl;
        break;
        
        case '-' : cout << a-b << endl;
        break;
        
        case '*' : cout << a*b << endl;
        break;
        
        case '/' : cout << a/b << endl;
        break;
        
        case '%' : cout << a%b << endl;
        break;
        
        default :
        cout << "please enter the valid answer" << endl;
    }

    return 0;
}
