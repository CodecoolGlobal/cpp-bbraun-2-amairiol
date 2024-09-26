#include <iostream>
#include <limits>
#include <cstdlib>

#include "ShapeCollection.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "EquilateralTriangle.h"
#include "RegularPentagon.h"
#include "Circle.h"

using namespace std;

void addNewShape(ShapeCollection& shapeCollection);
double getPositiveDouble(string prompt);

int main() {
    
    ShapeCollection s;

    s.addCircle(Circle(3.0));
    s.addCircle(Circle(5.0));
    s.addRectangle(Rectangle(3, 4));
    s.addRegularPentagon(RegularPentagon(5));

    s.getShapesTable();

    ShapeCollection shapeCollection{};
    bool isRunning = true;

    while (isRunning) {
        int option = 0;
        cout << "What do you want to do?" << endl;
        cout << "Add new shape (1)" << endl;
        cout << "Show all shapes (2)" << endl;
        cout << "Show shape with the largest perimeter (3)" << endl;
        cout << "Show shape with the largest area (4)" << endl;
        cout << "Quit (0)" << endl;
        cin >> option;

        switch (option)
        {
        case 0:
            isRunning = false;
            break;
        case 1:
            addNewShape(s);
            break;
        case 2:
            s.getShapesTable();
            break;
        case 3:
            s.getLargestShapeByPerimeter();
            break;
        case 4:
            s.getLargestShapeByArea();
            break;
        default:
            break;
        }
    }


    return 0;
}

void addNewShape(ShapeCollection& shapeCollection){
    bool isRunning = true;

    while (isRunning) {
        int option = 0;
        cout << "What shape do you want to add?\n";
        cout << "Circle (1)\n";
        cout << "Rectangle (2)\n";
        cout << "Triangle (3)\n";
        cout << "Square (4)\n";
        cout << "EquilateralTriangle (5)\n";
        cout << "RegularPentagon (6)\n";
        cout << "Quit (0)\n";
        cin >> option;

        // menu implementation
        switch (option)
        {
        case 0: // return
            isRunning = false;
            break;
        case 1: //circle
            shapeCollection.addCircle(Circle(getPositiveDouble("type the radius")));
            break;
        case 2: //rectangle
            shapeCollection.addRectangle(Rectangle(getPositiveDouble("type the rectangle's side a: "), 
                                                   getPositiveDouble("type the rectangle's side b: ")));
            break;
        case 3: //triangle
            shapeCollection.addTriangle(Triangle(getPositiveDouble("type the triangle's side a: "), 
                                                 getPositiveDouble("type the triangle's side b: "), 
                                                 getPositiveDouble("type the triangle's side c: ")));
            break;
        case 4: //square
            shapeCollection.addSquare(Square(getPositiveDouble("type the square's side a: ")));
            break;
        case 5: //equilateralTriangle
            shapeCollection.addEquilateralTriangle(EquilateralTriangle(getPositiveDouble("type the length of the triangle's sides: ")));
            break;
        case 6: //regularPentagon
            shapeCollection.addRegularPentagon(RegularPentagon(getPositiveDouble("type the length of the pentagon's side: ")));
            break;

        default:
            break;
        }
    }
}

double getPositiveDouble(string prompt) {
    double value;
    do {
        cout << prompt;
        cin >> value;
        if (cin.fail() || value <= 0) {
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a positive double." << endl;
        }
    } while (value <= 0);
    return value;
}