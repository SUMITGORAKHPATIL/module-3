#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];  

    
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;

    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    
    double average = (double)sum / n;

    
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
