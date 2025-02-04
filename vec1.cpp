//modify the second element of a vector and print the result using a range-based for loop.

#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<int> numbers = {10, 20, 30, 40, 50};
numbers[1] = 99;  
for (int num : numbers) {
 cout << num << " ";
}
return 0;
}
