#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Herbivore : public Animal {
public:
    void eat() override {
        cout << "Herbivore is eating plants" << endl;
    }
};

class Carnivore : public Animal {
public:
    void eat() override {
        cout << "Carnivore is eating meat" << endl;
    }
};

int main() {
    Animal* ptr;

    Herbivore herb;
    Carnivore carn;

    ptr = &herb;
    ptr->eat(); // Calls Herbivore's eat()

    ptr = &carn;
    ptr->eat(); // Calls Carnivore's eat()

    return 0;
}
