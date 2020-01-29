#include "Pet.h"

int main(int argc, char **argv) {
    // demonstrates overloaded constructor
    Pet *pet1 = new Pet("Fido", 8, "Dog", 18.6);
    cout << "Pet1 created" << endl;
    // demonstrates default constructor
    Pet *pet2 = new Pet;
    cout << "Pet2 created" << endl;

    // demonstrates setters with pet2
    pet2->setName("Mittens");
    pet2->setAge(13);
    pet2->setType("Cat");
    pet2->setWeight(11.3);

    // demonstrates getters

    // print pet1
    cout << "Pet1:" << endl;
    cout << "Name: " << pet1->getName() << endl;
    cout << "Age: " << pet1->getAge() << endl;
    cout << "Type: " << pet1->getType() << endl;
    cout << "Weight: " << pet1->getWeight() << " lbs" << endl;

    // print pet2
    cout << "Pet2:" << endl;
    cout << "Name: " << pet2->getName() << endl;
    cout << "Age: " << pet2->getAge() << endl;
    cout << "Type: " << pet2->getType() << endl;
    cout << "Weight: " << pet2->getWeight() << " lbs" << endl;

    delete pet1;
    delete pet2;

    return 0;
}
