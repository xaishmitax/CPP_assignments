//iterate through an array of numbers(array and loop)

#include <iostream>
using namespace std;

int main() {
int numbers[] = {10, 20, 30, 40, 50}; 
  int size = sizeof(numbers) / sizeof(numbers[0]); 

cout << "Array elements are: ";
for (int i = 0; i < size; i++) {
 cout << numbers[i] << " ";
 }
    
    return 0;
}