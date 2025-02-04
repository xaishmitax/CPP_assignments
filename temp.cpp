#include <iostream>
using namespace std;


double celsiusToFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {

    int choice;
    double temp, convertedTemp;

    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        convertedTemp = celsiusToFahrenheit(temp);
        cout << temp << "°C is " << convertedTemp << "°F\n";
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        convertedTemp = fahrenheitToCelsius(temp);
        cout << temp << "°F is " << convertedTemp << "°C\n";
    } else {
        cout << "Invalid choice. Please select 1 or 2.\n";
    }

    return 0;
}