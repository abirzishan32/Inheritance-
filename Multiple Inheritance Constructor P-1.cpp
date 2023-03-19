#include <bits/stdc++.h>
using namespace std;

class A {
  protected:
    int a;

  public:
    A() {
      a = 0;
      cout << "A constructor called" << endl;
    }
};

class B {
  protected:
    int b;

  public:
    B() {
      b = 0;
      cout << "B constructor called" << endl;
    }
};

class C : public A, public B {
  private:
    int c;

  public:
    C(int z) {
      c = z;
      cout << "C constructor called" << endl;
    }

    void display() {
      cout << "a: " << a << endl;
      cout << "b: " << b << endl;
      cout << "c: " << c << endl;
    }
};

int main() {
  C obj(3);
  obj.display();

  return 0;
}
