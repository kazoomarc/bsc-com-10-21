#include<iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {
    Rectangle rect;
    Triangle trgl;
    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;

    pPoly1->setValues(4, 5);
    pPoly2->setValues(4, 5);

    cout << rect.Area() << '\n';
    cout << trgl.Area() << '\n';

    pPoly1->printArea();
    pPoly2->printArea();


    //re-write
    // pPoly1->printArea();
    // pPoly2->printArea();

    // delete pPoly1;
    // delete pPoly2;



    return 0;
}