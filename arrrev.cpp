// print elemnets of an array in reverse order
#include <iostream>
using namespace std;

int main() {
int numbers[] = {10, 20, 30, 40, 50};  
 int size = sizeof(numbers) / sizeof(numbers[0]); 

cout << "Array elements in reverse order: ";
for (int i = size - 1; i >= 0; i--) {
 cout << numbers[i] << " ";
 }

    return 0;
}