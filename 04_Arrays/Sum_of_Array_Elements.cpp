#include <iostream>
using namespace std;

int sumofArray ( int arr[], int n ) {

    int ans = 0;

    for ( int i = 0 ; i < n ; i++ ) {
        ans = ans + arr[i];
    }

    return ans;
}

int main() {

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements: ";
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i];
    }

    cout << "Sum of array is : " << sumofArray(arr, n) << endl;

    return 0;
}
