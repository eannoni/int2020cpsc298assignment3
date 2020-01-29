#include "Pet.h"

// constructors
Pet::Pet() {
    name = "NoName";
    age = 0;
    type = "NoType";
    weight = 0;
}

Pet::Pet(string name, int age, string type, double weight) {
    this->name = name;
    this->age = age;
    this->type = type;
    this->weight = weight;
}

// getters
string Pet::getName() { return name; }

int Pet::getAge() { return age; }

string Pet::getType() { return type; }

double Pet::getWeight() { return weight; }

// setters
void Pet::setName(string name) {
    this->name = name;
}

void Pet::setAge(int age) {
    this->age = age;
}

void Pet::setType(string type) {
    this->type = type;
}

void Pet::setWeight(double weight) {
    this->weight = weight;
}
