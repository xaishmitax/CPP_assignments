// Write a C++ program that uses function overloading to:
// a. Calculate the area of a triangle when the three sides are given.
// b. Calculate the area of the triangle (when base and height are given)
// Note: for (b), make use of default argument
// We’ll use Heron’s formula to find the area of a triangle in terms of the lengths of its
// sides.
// 𝐴 = √𝑠(𝑠 − 𝑎)(𝑠 − 𝑏)(𝑠 − 𝑐)
// • A is the area of the triangle,
// • a, b, and c are the lengths of the sides of the triangle,
// • s is the semi-perimeter of the triangle,
// calculated as ( s = \frac{a + b + c}{2} ).

#include <iostream>
#include <cmath>

using namespace std;

double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double area(double base, double height = 1.0) {
    return 0.5 * base * height;
}

double perimeter(double a, double b, double c) {
    return a + b + c;
}

int main() {
    double a, b, c, base, height;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    cout << "Area of triangle with sides " << a << ", " << b << ", " << c << ": " << area(a, b, c) << endl;
    cout << "Perimeter of triangle with sides " << a << ", " << b << ", " << c << ": " << perimeter(a, b, c) << endl;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle with base " << base << " and height " << height << ": " << area(base, height) << endl;
    return 0;
}
