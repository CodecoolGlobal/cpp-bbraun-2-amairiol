#pragma once
#include <string>

class Rectangle {
private:
   double a;
   double b;
public:
   double calculateArea();
   double calculatePerimeter();
   Rectangle(double side_a, double side_b);
   std::string toString();
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};

// string Rectangle::getPerimeterFormula() {
//     return "2*a+2×b";
// }

// string Rectangle::getAreaFormula() {
//     return "a*b";
// }