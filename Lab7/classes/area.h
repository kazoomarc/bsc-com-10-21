#pragma once
#include "Shapes.h"

class Area {
public:
    static float calculateSquareArea(const shapes::Square&);
    static float calculateTriangleArea(const shapes::Triangle&);
    static float calculateCircleArea(const shapes::Circle&);
};

