#include <bits/stdc++.h>
using namespace std;
class Base{
public:
     int a ;
};


class D1 : virtual public Base{
public:
    int b ;
};


class D2 : virtual public Base{
public:
    int c ;
};


class D3 : public D1, public D2
{
public:
    int total;
};


int main ( )
{
    D3 ob;
    ob.a = 25;
    ob.b = 50;
    ob.c = 75;
    ob.total = ob.a +ob.b + ob.c;
    cout <<ob.a<< ob.b<< ob.c<<ob.total;
}
