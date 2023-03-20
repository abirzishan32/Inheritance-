#include <bits/stdc++.h>
using namespace std;

class Animal {
    public:
        void move() {
            cout << "The animal moves." << endl;
        }
};

class Dog : public Animal {
    public:
        void move() {
            cout << "The dog walks on four legs." << endl;
        }
};

int main() {
    Animal animal;
    animal.move();  // Output: The animal moves.

    Dog dog;
    dog.move();     // Output: The dog walks on four legs.

    return 0;
}
