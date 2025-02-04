// Calculate the:
// a. The area of a triangle
// b. Perimeter of a triangle

#include <iostream>
using namespace std;

int main() {
    float a, b, c, base, height, area, perimeter;

    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;
    cout << "Enter the length of side c: ";
    cin >> c;

    perimeter = a + b + c;
    cout << "The perimeter of the triangle is: " << perimeter << endl;

    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    area = 0.5 * base * height;
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
