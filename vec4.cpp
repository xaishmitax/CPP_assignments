//WAP to input an integer vector and print each element multiplied by 2

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    // Taking input from the user
    cout << "Enter " << n << " numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> value;
        numbers.push_back(value);
    }

    // Printing each element multiplied by 2
    cout << "Elements multiplied by 2: ";
    for(int num : numbers) {
        cout << num * 2 << " ";
    }

    return 0;
}
