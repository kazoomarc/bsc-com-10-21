#pragma once
#include <cmath>

namespace shapes {
    class Square {
    private:
        float sideLength;

    public:
        Square();
        Square(float);
        ~Square();

        void setSideLength(float);
        float getSideLength() const;
    };

    class Triangle {
    private:
        float base;
        float height;

    public:
        Triangle();
        Triangle(float, float);
        ~Triangle();

        void setBase(float);
        void setHeight(float);
        float getBase() const;
        float getHeight() const;
    };

    class Circle {
    private:
        float radius;

    public:
        Circle();
        Circle(float);
        ~Circle();

        void setRadius(float);
        float getRadius() const;
    };
}