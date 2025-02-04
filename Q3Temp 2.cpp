// WAP to convert celcius to fahrenheit and viice versa.
#include <iostream>
using namespace std;
int main(){
    int choice;
float tempC, tempF;

cout << "Converting temperature \n";
cout << "1. Celsius to Fahrenheit \n";
cout << "2. Fahrenheit to Celcius \n";
cin >> choice;

if (choice == 1){
    cout << "Enter the temperature in Celsius: \n";
    cin >> tempC;
    tempF = (tempC * 9 / 5) + 32;
    cout << tempC << "°C is equal to " << tempF << "°F.\n";
}
else if (choice == 2){
    cout << "Enter the temperature in Fahrenheit: \n";
    cin >> tempF;
    tempC = (tempF - 32) * 5 / 9;
    cout << tempF << "°F is equal to " << tempC << "°C.\n";
}
else {
        cout << "Invalid choice.\n";
    }
return 0; 
}

