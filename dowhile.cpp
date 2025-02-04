// print even num from 1 to 20 

#include <iostream>
using namespace std;

int main() {
    int i = 2;

    do {
        cout << i << " "; 
        i += 2;           
    } while (i <= 20);    

    cout << endl; 
    return 0;
}