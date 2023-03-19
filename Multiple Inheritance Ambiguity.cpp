#include <bits/stdc++.h>
using namespace std;


class A{
public:
    A(int b) {
        cout<<"A"<<endl;
    }
    void printFunc (){
        cout<<"String in A"<<endl;
    }
};

class B{
public:
    B(int a) {
        cout<<"B"<<endl;
    }
    void printFunc(){
        cout<<"String in B"<<endl;
    }
};

/*Look at the above class. Here, there are two different class but both have
same function "PrintFunc". So how can we distinguish it when we create an object of a class
which is derived from both of these? */

class C : public B, public A{ 
public:
    C(int a, int b) : B(a), A(b){ 
        cout << "C"<<endl;
    }
};



int main(){
    C obj(1, 2); //This is a constructor and it will print "B A C"
    //Way 1:

    //In this approach, we are explicitly which function I want to call
    obj.A :: printFunc(); //Here, we have called the "printFunc()" of class A
    obj.B :: printFunc(); //Here, we have called the "printFunc()" of class A



    //Way 2:

    //In this approach, we create an object of parent class and then assign the object of the child
    //class into the parent class. By doing this, the object of the parent class will hold only the
    //member values & functions of the class has itself. By this we can access the same function
    //for a particular class
    A temp1 = obj; 
    temp1.printFunc();
    //In the above line obj is a object of a class which is derived from both A and B class.
    //By assigning it to an object of class A means only the characteristics of A which obj holds will
    //be assigned to temp1. And thus if we call the printFunc() function for temp1 it will call the
    //function for the A object
    B temp2 = obj;
    temp2.printFunc();



    //Way 3:
    static_cast <A> (obj).printFunc();
    static_cast <B> (obj).printFunc();
    //In this case we are typecasting the printFunc() function for a particular class A or B. By this we can access the function of same name
    //but of different classes (A or B)


    return 0;
}
