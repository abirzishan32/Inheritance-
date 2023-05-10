#include <bits/stdc++.h>
using namespace std;

class Shape{
    public:
    virtual void draw(){    // This must be a virtual function
        cout<< "Drawing A Shape"<<endl;
    }
};

class Rectangle: public Shape{  // This is a derived class of Shape
    public:
    void draw(){
        cout<< "Drawing A Rectangle"<<endl;
    }
};

class Circle: public Shape{ // This is a derived class of Shape
    public:
    void draw(){ 
        cout<< "Drawing A Circle"<<endl;
    }
};



int main(){

    // Declaring an array of pointers of type Shape (Base Class) and assigning 2 derived class objects and 1 base class
    //object to it
    Shape *ptr [3] = {new Shape(), new Rectangle(), new Circle()};
    
    for(int i=0; i<3; i++){
        ptr[i]->draw(); // This will call the draw function of the respective class

        Rectangle *rect = dynamic_cast<Rectangle*>(ptr[i]); // This will try to convert the pointer of base class (Shape) 
                                                            //to child class (Rectangle) 
        if(rect != NULL){   // If the conversion is successful then the pointer will be pointing to a Rectangle object
            cout<<"It is a Rectangle"<<endl; 
        }
        else{
            Circle *circ = dynamic_cast<Circle*>(ptr[i]); // This will try to convert the pointer of base class (Shape) 
                                                          //to child class (Circle)
            if(circ != NULL){  // If the conversion is successful then the pointer will be pointing to a Circle object
                cout<<"It is a Circle"<<endl;
            }
            else{
                cout<<"It is a Shape"<<endl;
            }
        }
    }
  
    return 0;
}
