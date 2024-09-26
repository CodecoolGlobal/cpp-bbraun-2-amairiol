#pragma once
#include <string>

class Square {
private:
   double a;
public:
   double calculateArea();
   double calculatePerimeter();
   Square(double side_a);
   std::string toString();
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};
