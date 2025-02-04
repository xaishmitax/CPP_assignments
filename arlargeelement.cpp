//find largest element in an array

#include <iostream>
#include <algorithm>
 using namespace std;

int main(){
    int n[]= {1,2,3,4,5};
    int size = sizeof(n) / sizeof(n[0]);
    int largest = *max_element(n, n + size);
    cout << "The largest number is: " << largest << endl;

    return 0;
}
