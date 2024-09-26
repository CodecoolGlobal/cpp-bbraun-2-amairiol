#pragma once
#include <string>

class Triangle {
private:
   double a, b, c;
public:
   double calculateArea();
   double calculatePerimeter();
   Triangle(double side_a, double side_b, double side_c);
   std::string toString();
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};
