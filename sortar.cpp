//find the missing number in a sorted array/

#include <iostream>
using namespace std;

int main() {
int numbers[] = {1, 2, 3, 5, 6};  
int size = 5;

 for (int i = 0; i < size - 1; i++) {
    if (numbers[i] + 1 != numbers[i + 1]) {
     cout << "Missing number is: " << numbers[i] + 1 << endl;
        break;
        }
    }
 return 0;
}
