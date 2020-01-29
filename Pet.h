#include <iostream>
#include <string>

using namespace std;

class Pet {
    public:
        // constructors
        Pet();
        Pet(string name, int age, string type, double weight);
        // getters
        string getName();
        int getAge();
        string getType();
        double getWeight();
        // setters
        void setName(string name);
        void setAge(int age);
        void setType(string type);
        void setWeight(double weight);

    private:
        std::string name;
        int age;
        std::string type;
        double weight;

};
