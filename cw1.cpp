//constructor write a C program yo implement a class called Employee that has private member variables for name, employeeID and salary. Include member functions to calculate and set salary based on employee performance.
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize the employee's details
    Employee(string empName, int empID, double initialSalary) {
        name = empName;
        employeeID = empID;
        salary = initialSalary;
    }

    // Function to calculate and set salary based on performance
    void setSalaryBasedOnPerformance(char performanceGrade) {
        switch (performanceGrade) {
        case 'A':
            salary += salary * 0.20; // 20% increase
            break;
        case 'B':
            salary += salary * 0.10; // 10% increase
            break;
        case 'C':
            salary += salary * 0.05; // 5% increase
            break;
        default:
            cout << "Invalid performance grade. No changes to salary." << endl;
            return;
        }
        cout << "Salary updated successfully based on performance grade " << performanceGrade << "." << endl;
    }

    // Function to display employee details
    void displayDetails() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Create an employee object
    Employee emp("John Doe", 12345, 50000);

    // Display initial details
    cout << "Initial Employee Details:" << endl;
    emp.displayDetails();

    // Update salary based on performance
    char performanceGrade;
    cout << "\nEnter performance grade (A/B/C): ";
    cin >> performanceGrade;
    emp.setSalaryBasedOnPerformance(performanceGrade);

    // Display updated details
    cout << "\nUpdated Employee Details:" << endl;
    emp.displayDetails();

    return 0;
}
