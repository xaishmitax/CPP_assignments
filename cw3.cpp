//CONSTRUCTOR Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information.
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;

public:

    Student(string n, string c, int r, float m) {
        name = n;
        studentClass = c;
        rollNumber = r;
        marks = m;
    }

    char calculateGrade() {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 60) return 'C';
        else if (marks >= 50) return 'D';
        else return 'F';
    }

    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {

    string name, studentClass;
    int roll;
    float marks;

  
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Class: ";
    getline(cin, studentClass);
    cout << "Enter Roll Number: ";
    cin >> roll;
    cout << "Enter Marks: ";
    cin >> marks;

    Student s1(name, studentClass, roll, marks);
    cout << "\nStudent Details:\n";
    s1.displayInfo();

    return 0;
}
