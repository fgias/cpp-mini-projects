#include "Polygons.hpp"
#include <iostream>

int main() {
    // create a Pentagon, call its perimeter method
    Pentagon pentagon(10);
    std::cout << pentagon.computePerimeter() << std::endl;

    // create a Hexagon, call its perimeter method
    Hexagon hexagon(10);
    std::cout << hexagon.computePerimeter() << std::endl;

    // create a Hexagon, call the perimeter method through a reference to Polygon
    Polygon& refereceToPolygon = hexagon;
    std::cout << refereceToPolygon.computePerimeter() << std::endl;

    // retry virtual method

}
