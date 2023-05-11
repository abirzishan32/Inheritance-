#include <bits/stdc++.h>
using namespace std;

 
class Base {
};
class Derived : public Base {
};
int main()
{
    Derived d;
    try {
        // Monitored code
        throw d;
    }

    catch (Derived d) {
        cout << "Caught Derived Exception";
    }


    catch (Base b) {
        // This 'catch' block is NEVER executed
        cout << "Caught Base Exception";
    }
    
    
    getchar();
    return 0;
}
