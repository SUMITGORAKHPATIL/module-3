#include <iostream>
using namespace std;

int main() {
   
    const float PI = 3.14159;

    
    int age = 25;
    double price = 199.99;
    char grade = 'A';
    bool isAvailable = true;
    float radius = 5.5;

   
    cout << "Age: " << age << endl;
    cout << "Price: $" << price << endl;
    cout << "Grade: " << grade << endl;
    cout << "Availability: " << (isAvailable ? "Yes" : "No") << endl;
    cout << "Radius: " << radius << endl;
    cout << "Constant PI: " << PI << endl;

   
    double area = PI * radius * radius;
    price = price * 0.9; 
    age = age + 1;        

   
    cout << "\nAfter operations:" << endl;
    cout << "Age next year: " << age << endl;
    cout << "Discounted price: $" << price << endl;
    cout << "Area of circle with radius " << radius << ": " << area << endl;

    return 0;
}
