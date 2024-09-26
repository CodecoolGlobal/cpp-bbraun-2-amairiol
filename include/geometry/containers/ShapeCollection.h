#pragma once
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "EquilateralTriangle.h"
#include "RegularPentagon.h"

class ShapeCollection {
private:
   std::vector<Circle> circles;
   std::vector<EquilateralTriangle> equilateralTriangles;
   std::vector<Rectangle> rectangles;
   std::vector<RegularPentagon> regularPentagons;
   std::vector<Square> squares;
   std::vector<Triangle> triangles;

public:
   void addCircle(Circle circle);
   void addEquilateralTriangle(EquilateralTriangle equilateralTriangle);
   void addRectangle(Rectangle rectangle);
   void addRegularPentagon(RegularPentagon regularPentagon);
   void addSquare(Square square);
   void addTriangle(Triangle triangle);

   std::string getShapesTable();
   std::string getLargestShapeByPerimeter();
   std::string getLargestShapeByArea();
};
