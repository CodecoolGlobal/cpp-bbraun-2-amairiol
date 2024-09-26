#include <iostream>
#include "ShapeCollection.h"

using namespace std;

void ShapeCollection::addCircle(Circle circle) {
    circles.push_back(circle);
}
void ShapeCollection::addEquilateralTriangle(EquilateralTriangle equilateralTriangle) {
    equilateralTriangles.push_back(equilateralTriangle);
}
void ShapeCollection::addRectangle(Rectangle rectangle) {
    rectangles.push_back(rectangle);
}
void ShapeCollection::addRegularPentagon(RegularPentagon regularPentagon) {
    regularPentagons.push_back(regularPentagon);
}
void ShapeCollection::addSquare(Square square) {
    squares.push_back(square);
}
void ShapeCollection::addTriangle(Triangle triangle) {
    triangles.push_back(triangle);
}

std::string ShapeCollection::getShapesTable() {
    string table = "";

    for (Circle circle: circles) {
        table += circle.toString() + "\n";
    }

    for (EquilateralTriangle equilateralTriangle: equilateralTriangles) {
        table += equilateralTriangle.toString() + "\n";
    }

    for (Rectangle rectangle: rectangles) {
        table += rectangle.toString() + "\n";
    }

    for (RegularPentagon regularPentagon: regularPentagons) {
        table += regularPentagon.toString() + "\n";
    }

    for (Square square: squares) {
        table += square.toString() + "\n";
    }

    for (Triangle triangle: triangles) {
        table += triangle.toString() + "\n";
    }

    cout << table;

    return table;
}

string ShapeCollection::getLargestShapeByArea(){
    double maxArea = 0;
    string maxAreaShape = "";

    for(Circle circle: circles){
        if (circle.calculateArea() > maxArea){
            maxArea = circle.calculateArea();
            maxAreaShape = circle.toString();
        }
    }

    for(EquilateralTriangle equilateralTriangle: equilateralTriangles){
        if (equilateralTriangle.calculateArea() > maxArea){
            maxArea = equilateralTriangle.calculateArea();
            maxAreaShape = equilateralTriangle.toString();
        }
    }

    for(Rectangle rectangle: rectangles){
        if (rectangle.calculateArea() > maxArea){
            maxArea = rectangle.calculateArea();
            maxAreaShape = rectangle.toString();
        }
    }

    for(RegularPentagon regularPentagon: regularPentagons){
        if (regularPentagon.calculateArea() > maxArea){
            maxArea = regularPentagon.calculateArea();
            maxAreaShape = regularPentagon.toString();
        }
    }

    for(Square square: squares){
        if (square.calculateArea() > maxArea){
            maxArea = square.calculateArea();
            maxAreaShape = square.toString();
        }
    }

    for(Triangle triangle: triangles){
        if (triangle.calculateArea() > maxArea){
            maxArea = triangle.calculateArea();
            maxAreaShape = triangle.toString();
        }
    }

    cout << "max area: "       << maxArea      << endl;
    cout << "max area shape: " << maxAreaShape << endl;

    return maxAreaShape;
}

string ShapeCollection::getLargestShapeByPerimeter(){
    double maxPerimeter = 0;
    string maxPerimeterShape = "";

    for(Circle circle: circles){
        if (circle.calculatePerimeter() > maxPerimeter){
            maxPerimeter = circle.calculatePerimeter();
            maxPerimeterShape = circle.toString();
        }
    }

    for(EquilateralTriangle equilateralTriangle: equilateralTriangles){
        if (equilateralTriangle.calculateArea() > maxPerimeter){
            maxPerimeter = equilateralTriangle.calculateArea();
            maxPerimeterShape = equilateralTriangle.toString();
        }
    }

    for(Rectangle rectangle: rectangles){
        if (rectangle.calculateArea() > maxPerimeter){
            maxPerimeter = rectangle.calculateArea();
            maxPerimeterShape = rectangle.toString();
        }
    }

    for(RegularPentagon regularPentagon: regularPentagons){
        if (regularPentagon.calculateArea() > maxPerimeter){
            maxPerimeter = regularPentagon.calculateArea();
            maxPerimeterShape = regularPentagon.toString();
        }
    }

    for(Square square: squares){
        if (square.calculateArea() > maxPerimeter){
            maxPerimeter = square.calculateArea();
            maxPerimeterShape = square.toString();
        }
    }

    for(Triangle triangle: triangles){
        if (triangle.calculateArea() > maxPerimeter){
            maxPerimeter = triangle.calculateArea();
            maxPerimeterShape = triangle.toString();
        }
    }

    cout << "max perimeter: "       << maxPerimeter      << endl;
    cout << "max perimeter shape: " << maxPerimeterShape << endl;

    return maxPerimeterShape;
}
