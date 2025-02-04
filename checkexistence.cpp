// check existence of a number in an aray

#include <iostream>
using namespace std;

int main() {
int numbers[] = {10, 20, 30, 40, 50};  
int target, i;
bool found = false;

cout << "Enter a number to search: ";
cin >> target;

for (i = 0; i < 5; i++) {
     if (numbers[i] == target) {
         found = true;
        break;
        }
    }

 if (found) cout << "Number is in the array." << endl;
 else
cout << "Number is not in the array." << endl;

 return 0;
}
