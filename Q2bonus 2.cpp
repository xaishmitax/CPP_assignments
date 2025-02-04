// WAP to calculate net salary of an emploee under the following conditiom:
// a. if salary > 20,000 and <= 25, 000 ; bonus = 15%
// b. if salary < = 20,000; Bonus = 10%
// c. else bonus = 5%

#include <iostream>
using namespace std;
int main(){
{
    float salary, bonus, netSalary;
    cout << "Enter the salary of the employee: ";
    cin >> salary;
    if (salary > 20000 && salary <=25000) {
        bonus = salary * 0.15;
    }
    else if (salary <= 20000){
        bonus = salary * 0.10;
    }
    else {
        bonus = salary * 0.05;
    }
netSalary = bonus + salary;
    cout << "Regular salary: " << salary << endl;
cout << "Bonus: " << bonus << endl;
cout << "Total netSalary: " << netSalary << endl;
}
return 0; 
}

