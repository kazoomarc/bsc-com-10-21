#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include <string>

class Person
{
    public:
        Person();
        Person(float newWeight);
        virtual ~Person();

        float operator+(const Person& that);

    protected:

    private:
        float mWeight;
        string mFirstName;
        int mAge;
};

#endif // PERSON_H
