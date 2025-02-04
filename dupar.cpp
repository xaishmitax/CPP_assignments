// remove duplicate from an array
#include <iostream>
using namespace std;

int main() {
int numbers[] = {10, 20, 30, 20, 40, 10, 50};  
int size = 7; 
int unique[size], uIndex = 0; 

 for (int i = 0; i < size; i++) {
bool isDuplicate = false;
for (int j = 0; j < uIndex; j++) {
if (numbers[i] == unique[j]) {
 isDuplicate = true;
break;
}
}
if (!isDuplicate) {
unique[uIndex] = numbers[i];
uIndex++;
}
 }
cout << "Array without duplicates: ";
for (int i = 0; i < uIndex; i++) {
 cout << unique[i] << " ";
  }
 return 0;
}

