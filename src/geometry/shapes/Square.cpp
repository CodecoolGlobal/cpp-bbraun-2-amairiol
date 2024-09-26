#define _USE_MATH_DEFINES
#include "Square.h"
#include <cmath>

using namespace std;

Square::Square(double side_a): a(side_a) {}

double Square::calculateArea() {
    return a*a;
}

double Square::calculatePerimeter() {
    return 4*a;
}

string Square::toString(){
    return "Square, a = " + to_string(a);
}

string Square::getPerimeterFormula() {
    return "4*a";
}

string Square::getAreaFormula() {
    return "a*a";
}