#include<iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

// int main() {
//     Rectangle rect;
//     Triangle trgl;
//     rect.setValues(4, 5);
//     trgl.setValues(4, 5);
//     cout << rect.Area() << '\n';
//     cout << trgl.Area() << '\n';
//     return 0;
// }

// #include<iostream>
// #include "Rectangle.h"
// #include "Triangle.h"

// using namespace std;

// int main() {
//     Rectangle rect;
//     Triangle trgl;
//     Polygon* pPoly1 = &rect;
//     Polygon* pPoly2 = &trgl;
//     pPoly1->setValues(4, 5);
//     pPoly2->setValues(4, 5);

//     cout << rect.Area() << '\n';
//     cout << trgl.Area() << '\n';

//     return 0;
// }

int main() {
    Rectangle rect;
    Triangle trgl;
    Polygon poly;
    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;
    Polygon* pPoly3 = &poly;

    pPoly1->setValues(4, 5);
    pPoly2->setValues(4, 5);
    pPoly3->setValues(4, 5);

    cout << pPoly1->Area() << '\n';
    cout << pPoly2->Area() << '\n';
    cout << pPoly3->Area() << '\n';


}