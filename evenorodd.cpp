#include <iostream>
using namespace std;

int main() {
    int num;
    
    // Asking the user for a number
    cout << "Enter a number: ";
    cin >> num;
    
    // Checking if the number is even or odd
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
    
    return 0;
}