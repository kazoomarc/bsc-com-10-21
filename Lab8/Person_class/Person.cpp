#include "Person.h" // Include the header file for the Person class
// Default constructor
Person::Person() : mWeight(0.0f), mAge(0) { }

// Constructor with weight parameter
Person::Person(float newWeight) : mWeight(newWeight), mAge(0) { }

Person::Person(string name, float weight) {
    mWeight = weight;
    mAge = 0;
    mFirstName = name;
}
// Virtual destructor
Person::~Person() { }



// Overloaded + operator
float Person::operator+(const Person& that) {
    return this->mWeight + that.mWeight;
}


// Overloaded == operator
bool Person::operator==(const Person& that) const {
    return this->mFirstName == that.mFirstName;
}

// Overloaded != operator
bool Person::operator!=(const Person& that) const {
    return !(*this == that);
}

// Overloaded < operator
bool Person::operator<(const Person& that) const {
    return this->mFirstName < that.mFirstName;
}

// Overloaded > operator
bool Person::operator>(const Person& that) const {
    return that < *this;
}

Person::operator int() {
    return mAge;
}

Person::operator string() {
    return mFirstName;
}

Person::operator float() {
    return mWeight;
}

