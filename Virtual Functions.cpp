#include <bits/stdc++.h>
using namespace std;

class Base{
public:
    void virtual show(){ //It is a virtual function. Making it virtual leads it not to be accessed again. Remove the part "virtual" and check output for better understanding 
        cout<< "Base class" <<endl;
    }
};

class Der1 : public Base{
public:
    void show(){
        cout << "Derive 1" <<endl;
    }
};


class Der2 : public Base{
public:
    void show(){
        cout << "Derive 2" <<endl;
    }
};

int main(){
    Base *ptr1; //The pointer is of Base class. So to access the show() function of a child class by this pointer we need to make the show() function
                //of the base class virtual
    ptr1 = new Der1();
    ptr1 -> show();
    
    Base *ptr2; //The pointer is of Base class. So to access the show() function of a child class by this pointer we need to make the show() function
                //of the base class virtual
    ptr2 = new Der2();
    ptr2 -> show();
    
    Der1 *ptr3; //The pointer is of Derive class. So to access the show() function of a child class by this pointer we do not need to 
                //make the show() function of the base class virtual because by we have created a pointer which is a type of a Der1
                
    ptr3 = new Der1();
    ptr3 -> show();
    
    Der2 *ptr4; //The pointer is of Derive class. So to access the show() function of a child class by this pointer we do not need to 
                //make the show() function of the base class virtual because by we have created a pointer which is a type of a Der2
    ptr4 = new Der2();
    ptr4 -> show();
}
