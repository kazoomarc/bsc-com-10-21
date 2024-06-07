#include "Shapes.h"

namespace shapes {
    Square::Square() : sideLength(0) { }

    Square::Square(float s) : sideLength(s) { }

    Square::~Square() { }

    void Square::setSideLength(float s) {
        sideLength = s;
    }

    float Square::getSideLength() const {
        return sideLength;
    }

    Triangle::Triangle() : base(0), height(0) { }

    Triangle::Triangle(float b, float h) : base(b), height(h) { }

    Triangle::~Triangle() { }

    void Triangle::setBase(float b) {
        base = b;
    }

    void Triangle::setHeight(float h) {
        height = h;
    }

    float Triangle::getBase() const {
        return base;
    }

    float Triangle::getHeight() const {
        return height;
    }

    Circle::Circle() : radius(0) { }

    Circle::Circle(float r) : radius(r) { }

    Circle::~Circle() { }

    void Circle::setRadius(float r) {
        radius = r;
    }

    float Circle::getRadius() const {
        return radius;
    }
}
