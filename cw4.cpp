//Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std;

class Triangle {
private:
    float side1, side2, side3;

public:
    Triangle(float s1, float s2, float s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    void checkTriangleType() {
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "The triangle is Isosceles." << endl;
        }
        else {
            cout << "The triangle is Scalene." << endl;
        }
    }

    void displaySides() {
        cout << "Sides of the triangle: " << side1 << ", " << side2 << ", " << side3 << endl;
    }
};

int main() {
    float a, b, c;

    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    Triangle t(a, b, c);

    t.displaySides();
    t.checkTriangleType();

    return 0;
}
