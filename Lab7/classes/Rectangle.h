#pragma once
class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); // Default constructor
    Rectangle(float, float); // Overloaded constructor
    ~Rectangle(); // Destructor

    void setLength(float);
    void setWidth(float);
    float getLength() const;
    float getWidth() const;
    float getArea() const;
};