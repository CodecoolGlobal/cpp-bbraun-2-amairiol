#define _USE_MATH_DEFINES
#include "Triangle.h"
#include <cmath>

using namespace std;

Triangle::Triangle(double side_a, double side_b, double side_c): a(side_a), b(side_b), c(side_c) {}

double Triangle::calculateArea() {
    double s = calculatePerimeter()/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

double Triangle::calculatePerimeter() {
    return a+b+c;
}

string Triangle::toString(){
    return "Triangle, a, b, c = " + to_string(a) + " " + to_string(b) + " " + to_string(c);
}

string Triangle::getPerimeterFormula() {
    return "a+b+c";
}

string Triangle::getAreaFormula() {
    return "sqrt(s*(s-a)*(s-b)*(s-c))";
}