#include <iostream>
#include <string>
using namespace std;

// Base class Animal
class Animal {
protected:
    string name;
    string species;
    int age;

public:
    Animal(string n = "", string s = "", int a = 0) : name(n), species(s), age(a) {}

    void setName(string n) { name = n; }
    void setSpecies(string s) { species = s; }
    void setAge(int a) { age = a; }

    string getName() const { return name; }
    string getSpecies() const { return species; }
    int getAge() const { return age; }
};

// Derived class Cat
class Cat : public Animal {
private:
    string color;
    string breed;

public:
    Cat(string n, string s, int a, string c, string b) : Animal(n, s, a), color(c), breed(b) {}

    void setColor(string c) { color = c; }
    void setBreed(string b) { breed = b; }

    string getColor() const { return color; }
    string getBreed() const { return breed; }
};

// Derived class Dog
class Dog : public Animal {
private:
    double weight;
    string breed;

public:
    Dog(string n, string s, int a, double w, string b) : Animal(n, s, a), weight(w), breed(b) {}

    void setWeight(double w) { weight = w; }
    void setBreed(string b) { breed = b; }

    double getWeight() const { return weight; }
    string getBreed() const { return breed; }
};

int main() {
    Cat myCat("Whiskers", "Feline", 2, "Black", "Siamese");
    Dog myDog("Buddy", "Canine", 3, 25.0, "Labrador");

    cout << "Cat Details:" << endl;
    cout << "Name: " << myCat.getName() << endl;
    cout << "Species: " << myCat.getSpecies() << endl;
    cout << "Age: " << myCat.getAge() << endl;
    cout << "Color: " << myCat.getColor() << endl;
    cout << "Breed: " << myCat.getBreed() << endl;

    cout << "\nDog Details:" << endl;
    cout << "Name: " << myDog.getName() << endl;
    cout << "Species: " << myDog.getSpecies() << endl;
    cout << "Age: " << myDog.getAge() << endl;
    cout << "Weight: " << myDog.getWeight() << " kg" << endl;
    cout << "Breed: " << myDog.getBreed() << endl;

    return 0;
}
