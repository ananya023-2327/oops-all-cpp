#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void speak() {
        cout << "Animal sound!" << endl;
    }
};

// Derived class 1
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal walks on land." << endl;
    }
};

// Derived class 2
class Bird : public Animal {
public:
    void fly() {
        cout << "Bird flies in the sky." << endl;
    }
};


class Bat : public Mammal, public Bird {
public:
    void echolocate() {
        cout << "Bat uses echolocation." << endl;
    }
};

int main() {
    Bat bat;


    bat.speak();          // From Animal class
    bat.walk();          // From Mammal class
    bat.fly();           // From Bird class
    bat.echolocate();    // From Bat class

    return 0;
}
