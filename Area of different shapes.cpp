// Area of different shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double AreaSquare(double length, double base) {
    return length * base;
}
double AreaRectangle(double length, double base) {
    return length * base;
}
double AreaCircle(double pi, double radius) {
   
    return 2 * 3.142 * (radius * radius);
}
double AreaTriangle(double base, double height) {
    return  (base * height) / 2;
}

int main() {
    double length, base, height, radius;
    double  pi =3.142;
    cout << "Enter your length" << endl;
    cin >> length;
    cout << "Enter your base" << endl;
    cin >> base;
    cout << "Enter your height" << endl;
    cin >> height;
    cout << "Enter your radius" << endl;
    cin >> radius;

    cout << "The area of square is equals to : " << AreaSquare(length, base) << endl;
    cout << "The area of rectangle is equals to : " << AreaRectangle(length, base) << endl;
    cout << "The area of circle is equals to : " << AreaCircle(pi, radius) << endl;
    cout << "The area of triangle is equals to : " << AreaTriangle(base, height) << endl;






}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
