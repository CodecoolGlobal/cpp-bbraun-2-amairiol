#pragma once
#include <string>

class RegularPentagon {
private:
   double a;
public:
   double calculateArea();
   double calculatePerimeter();
   RegularPentagon(double side_a);
   std::string toString();
   static std::string getPerimeterFormula();
   static std::string getAreaFormula();
};

// string RegularPentagon::getPerimeterFormula() {
//     return "5*a";
// }

// string RegularPentagon::getAreaFormula() {
//     return "a*a*sqrt(5*(5+2*sqrt(5))/4";
// }