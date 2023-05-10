#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;        // Pure virtual function
};

class Square : public Shape {
public:
    void draw() {       // Overriding the pure virtual function
        cout << "Drawing a circle" << endl;
    }
};

int main() {
    Square sq;       // Create a circle object
    Shape* s = &sq;  // Assign the address of the circle object to the shape pointer

    // Get the type information for the object
    const type_info& t = typeid(*s);      // Note the dereferencing of the pointer

    cout << "Type name: " << t.name() << endl;      // Print the type name
    cout << "Hash code: " << t.hash_code() << endl; // Print the hash code

    if (t == typeid(Square)) {      // Compare the type with the type of the circle object
        cout << "The object is a circle" << endl;
    }

    return 0;
}
