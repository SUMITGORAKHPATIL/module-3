#include <iostream>
using namespace std;
int globalVar = 50;
void localExample() {
    int localVar = 10; 
    cout << "Inside localExample() -> Local variable: " << localVar << endl;
    cout << "Inside localExample() -> Global variable: " << globalVar << endl;
}

void modifyGlobal() {
    globalVar = 100; 
    cout << "Inside modifyGlobal() -> Global variable changed to: " << globalVar << endl;
}

int main() {
    cout << "In main() -> Global variable: " << globalVar << endl;

    localExample();   
    modifyGlobal();   

    cout << "Back in main() -> Global variable: " << globalVar << endl;

    return 0;
}
