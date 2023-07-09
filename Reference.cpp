#include <iostream>

using namespace std;

class Point {
public:
  int x, y;

  Point(int x, int y) {
    this->x = x;
    this->y = y;
  }

  void print() {
    cout << "(" << x << ", " << y << ")" << endl;
  }
};

void modify(Point& point) {
  point.x = 10;
  point.y = 20;
}

int main() {
  Point point(1, 2);

  cout << "Before modify: ";
  point.print();

  modify(point);

  cout << "After modify: ";
  point.print();

  return 0;
}
