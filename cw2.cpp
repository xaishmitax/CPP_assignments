//CONSTRUCTOR Write a C++ program  to implement a class called Date that  has private member variabes for day, month and year.Include member functions to set and get these variables, as well as to validate if the date is valid.
#include <iostream>
#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    bool isLeapYear(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    bool isValidDate(int d, int m, int y) {
        if (y < 1 || m < 1 || m > 12 || d < 1) {
            return false;
        }

        int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (isLeapYear(y)) {
            daysInMonth[2] = 29;
        }

        return d <= daysInMonth[m];
    }

public:
    Date(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date. Setting default date to 1/1/2000." << endl;
            day = 1;
            month = 1;
            year = 2000;
        }
    }

    void displayDate() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date validDate(15, 8, 2023);
    cout << "Valid date: ";
    validDate.displayDate();


    Date invalidDate(31, 2, 2023);
    cout << "Invalid date: ";
    invalidDate.displayDate();

    return 0;
}