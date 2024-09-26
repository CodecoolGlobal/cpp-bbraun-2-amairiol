#pragma once
#include <string>

class EquilateralTriangle {
private:
    double a;
public:
   EquilateralTriangle(double length);
   double calculateArea();
   double calculatePerimeter();
   std::string toString();
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};