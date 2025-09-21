#include <iostream>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person {
private:
    string studentID;

public:
    void setStudentDetails(string n, int a, string id) {
        setPersonDetails(n, a); 
        studentID = id;
    }

    void displayStudentDetails() {
        displayPersonDetails(); 
        cout << "Student ID: " << studentID << endl;
    }
};


class Teacher : public Person {
private:
    string subject;

public:
    void setTeacherDetails(string n, int a, string sub) {
        setPersonDetails(n, a); 
        subject = sub;
    }

    void displayTeacherDetails() {
        displayPersonDetails(); 
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    
    Student s;
    s.setStudentDetails("Alice", 20, "S123");
    cout << "Student Details:" << endl;
    s.displayStudentDetails();

    cout << endl;

   
    Teacher t;
    t.setTeacherDetails("Mr. John", 40, "Mathematics");
    cout << "Teacher Details:" << endl;
    t.displayTeacherDetails();

    return 0;
}
