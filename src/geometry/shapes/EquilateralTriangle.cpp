#define _USE_MATH_DEFINES
#include "EquilateralTriangle.h"
#include <cmath>

using namespace std;

EquilateralTriangle::EquilateralTriangle(double length): a(length) {}

double EquilateralTriangle::calculateArea() {
    return (a * a * sqrt(3)/4);
}

double EquilateralTriangle::calculatePerimeter() {
    return (3 * a);
}
string EquilateralTriangle::toString(){
    return "EquilateralTriangle, a = " + to_string(a);
}

string EquilateralTriangle::getPerimeterFormula() {
    return "3*a";
}

string EquilateralTriangle::getAreaFormula() {
    return "(a * a * sqrt(3)/4)";
}