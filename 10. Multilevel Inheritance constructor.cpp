#include <bits/stdc++.h>
using namespace std;


class Person {      
  protected:
    string name; 

  public:
    Person(string n) {      
      name = n;
      cout << "Person constructor called" << endl;
    }
};

class Employee : public Person {    
  protected:
    int id;

  public:
    Employee(string n, int i) : Person(n) {     
      id = i;
      cout << "Employee constructor called" << endl;
    }
};

class Manager : public Employee {
  private:
    string department;

  public:
    Manager(string n, int i, string d) : Employee(n, i) {
      department = d;
      cout << "Manager constructor called" << endl;
    }

    void display() {
      cout << "Name: " << name << endl;
      cout << "ID: " << id << endl;
      cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m("John", 123, "Sales");
    m.display();
}
