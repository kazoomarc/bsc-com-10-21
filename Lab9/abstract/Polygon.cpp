#include "Polygon.h"

#include<iostream>
using namespace std;

void Polygon::setValues(int width, int height) {
    mWidth = width;
    mHeight = height;
}

void Polygon::printArea() {
    cout << this->Area() << '\n';
}