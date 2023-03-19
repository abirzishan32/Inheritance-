#include <bits/stdc++.h>
using namespace std;
class Animal {
public:
    virtual void speak() {
        cout << "I am an animal." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "I am a dog." << endl;
    }
};

int main() {
    Animal* animal1 = new Animal();
    Animal* animal2 = new Dog();

    animal1->speak(); // Static binding, calls Animal::speak()
    animal2->speak(); // Dynamic binding, calls Dog::speak()
}
