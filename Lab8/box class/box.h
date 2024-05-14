#pragma once

#include<iostream>
using namespace std;

class Box{
    public:
    Box();

    Box(const double newLength, const double newBreadth, const double newHeight);

    ~Box();

    double GetVolume();

    void setLength(double len);

    void setBreadth(double bre);

    void setHeight(double hei);

    //overload + opp to add two box objects
    Box operator+(const Box& b);
    friend std::ostream& operator<<(std::ostream& os, const Box& box);

    private:
    double length;
    double breadth;
    double height;
};
