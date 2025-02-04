//WAP to iterate through a vector of strings.
#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<string> words = {"apple", "banana", "cherry"};  
 cout << "Words in the vector: ";
for(string word : words) {
cout << word << " ";
}
    return 0;
}