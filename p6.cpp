#include <iostream>
using namespace std;

int main() {
   
    int intValue = 10;
    double doubleValue = 5.5;
    double resultImplicit = intValue + doubleValue;

    cout << "Implicit Conversion:" << endl;
    cout << "intValue = " << intValue << endl;
    cout << "doubleValue = " << doubleValue << endl;
    cout << "resultImplicit = intValue + doubleValue = " << resultImplicit << endl;

    cout << "\nExplicit Type Conversion (Casting):" << endl;
   
    double pi = 3.14159;
    int piInt = static_cast<int>(pi);

    cout << "pi = " << pi << endl;
    cout << "piInt (after casting) = " << piInt << endl;

   
    int count = 7;
    float countFloat = (float)count; 
    cout << "count = " << count << endl;
    cout << "countFloat (after casting) = " << countFloat << endl;

    return 0;
}
