//c++ program that uses fuction overloading to calculate the area of tri when sides r given. also calculate area of tri.
#include <iostream>
#include <cmath>
using namespace std;

float CalculateArea (float a, float b, float c){
float s = (a+b+c)/2;

float area= sqrt(s*(s-a) *(s-b)*(s-c));
return area;
}

float CalculateArea (float h, float b){
    float area= 0.5*(b * h);
    return area;
}
int main()
{
float a,b,c;
float base, height;
cout << "Enter base and height";
cin >> base >> height;
double area = CalculateArea( base, height);
        cout << "The area of the triangle is: " << area << endl;
cout<< "Enter three sides:";
cin >> a >> b >> c;
if (a + b > c && a + c > b && b + c > a) {
        double area = CalculateArea(a, b, c);
        cout << "The area of the triangle is: " << area << endl;
        } else {
        cout << "The given sides do not form a valid triangle." << endl;
    }

    return 0;
}