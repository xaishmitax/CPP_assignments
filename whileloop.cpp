// count donwn from given number to 0.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<< "Enter any number" << endl;
    cin >> num;
    while (num >= 0 ){
cout<< num<< " ";
num--;
    }
    
    return 0;
}