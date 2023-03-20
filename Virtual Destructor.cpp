#include <bits/stdc++.h>
using namespace std;
class Base{
public:
    Base () {
        cout << "Base class is constructed" << endl;
    }
    virtual ~Base(){
        cout << "Base class is destructed" << endl;
    }
};

class Derive : public Base{
public:
    Derive() {
        cout << "Derived class is constructed" << endl;
    }
    ~Derive(){
        cout << "Derived class is destructed" << endl;
    }
};

int main(){
    Base *b;
    b = new Derive(); //Storing derived class into a base class pointer means only the functionality of the base class will be stored
                      //in the base class pointer. It means that while destructing via pointer, we cant destruct the derived class portion.
                        //To do it, we have to make the base class destructor as "VIRTUAL"
    delete b;
}
