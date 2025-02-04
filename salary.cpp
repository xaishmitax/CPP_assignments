#include <iostream>
using namespace std;

int main() {
    float salary, bonus = 0, NetSalary;

    cout << "Enter your salary: ";
    cin >> salary;

    if (salary > 20000 && salary < 25000) {
        bonus = salary * 0.15; 
        NetSalary= salary+ bonus;

    }
    else if
        (salary< 20000 && salary > 0 ) {
            bonus =  salary * 0.1;
            NetSalary= salary+ bonus;
        }
        else{

            bonus = salary * 0.5;
        NetSalary= salary+ bonus;
        }


    cout << "Salary: " << salary << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "NetSalary:" << NetSalary << endl;

    return 0;
}
