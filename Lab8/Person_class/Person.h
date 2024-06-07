#pragma once
#include<iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person();
    Person(string name, float weight);

    Person(float newWeight);
    virtual ~Person();

    float operator+(const Person& that);


    bool operator==(const Person& that) const;
    bool operator!=(const Person& that) const;
    bool operator<(const Person& that) const;
    bool operator>(const Person& that) const;
    operator int();
    operator float();
    operator string();




protected:

private:
    float mWeight;
    string mFirstName;
    int mAge;
};

