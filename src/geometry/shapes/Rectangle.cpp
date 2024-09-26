#define _USE_MATH_DEFINES
#include "Rectangle.h"
#include <cmath>

using namespace std;

Rectangle::Rectangle(double side_a, double side_b): a(side_a), b(side_b) {}

string Rectangle::getPerimeterFormula() {
    return "2*a+2×b";
}

string Rectangle::getAreaFormula() {
    return "axb";
}

double Rectangle::calculateArea() {
    return a * b;
}

double Rectangle::calculatePerimeter() {
    return 2 * a + 2 * b;
}

string Rectangle::toString(){
    return "Rectangle, a, b = " + to_string(a) + to_string(b);
}
