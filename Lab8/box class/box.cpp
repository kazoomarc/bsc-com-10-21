#pragma once
#include "box.h"

Box::Box(){
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

Box::Box(const double newLength, const double newBreadth, const double newHeight){
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}

Box::~Box(){}

double Box::GetVolume(){
    return length*breadth*height;
}

void Box::setLength(double len){
    length = len;
}

void Box::setBreadth(double bre){
    breadth = bre;
}

void Box::setHeight(double hei){
    height = hei;
}

//overload + opp to add two box objects
Box Box::operator+(const Box& b){
    Box box;

    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;

    return box;
}

std::ostream& operator<<(std::ostream& os, const Box& box) {
    os << "Length: " << box.length << ", Breadth: " << box.breadth << ", Height: " << box.height;
    return os;
}

int main(){
    Box a {2,5,6};
    Box b;
    b.setHeight(2);
    b.setBreadth(2);
    b.setLength(2);

    cout<<(a+b)<<endl;

    return 0;
}
