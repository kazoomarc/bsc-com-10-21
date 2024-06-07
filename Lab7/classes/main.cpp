#include <iostream>
#include "Rectangle.h"
#include "Area.h"

int main() {
    int choice;
    do {
        std::cout << "1. Calculate area of square\n";
        std::cout << "2. Calculate area of triangle\n";
        std::cout << "3. Calculate area of circle\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
        {
            float side;
            std::cout << "Enter side length of square: ";
            std::cin >> side;
            shapes::Square square(side);
            std::cout << "Area of square: " << Area::calculateSquareArea(square) << "\n";
            break;
        }
        case 2:
        {
            float base, height;
            std::cout << "Enter base of triangle: ";
            std::cin >> base;
            std::cout << "Enter height of triangle: ";
            std::cin >> height;
            shapes::Triangle triangle(base, height);
            std::cout << "Area of triangle: " << Area::calculateTriangleArea(triangle) << "\n";
            break;
        }
        case 3:
        {
            float radius;
            std::cout << "Enter radius of circle: ";
            std::cin >> radius;
            shapes::Circle circle(radius);
            std::cout << "Area of circle: " << Area::calculateCircleArea(circle) << "\n";
            break;
        }
        case 4:
            std::cout << "Quitting...\n";
            break;
        default:
            std::cout << "Invalid choice, try again.\n";
        }
    } while (choice != 4);

    return 0;
}