#include<iostream>
using namespace std;

int perimeter(int side1, int side2, int side3){
    int perimeter = side1+ side2+ side3;
    return perimeter;
}
int area(int base, int height){
    int area=  (base*height)/2;
    return area;
}

int main(){
    //int choose;
   // cout<< "chose 1.perimeter, 2. area";
   // if choose = 1;
    
    cout<< "ther perimeter and area of the triangle is:" << perimeter(2,3,4)<< endl << area (2,4)<< endl;
}