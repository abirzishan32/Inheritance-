#include <bits/stdc++.h>
using namespace std;
class A {
  protected:
    int a;

  public:
    A(int x) {
      a = x;
      cout << "A constructor called" << endl;
    }
};

class B {
  protected:
    int b;

  public:
    B(int y) {
      b = y;
      cout << "B constructor called" << endl;
    }
};

class C : public A, public B {
  private:
    int c;

  public:
    C(int x, int y, int z) : A(x), B(y) {
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
  C obj(1, 2, 3);
  obj.display();
  return 0;
}

