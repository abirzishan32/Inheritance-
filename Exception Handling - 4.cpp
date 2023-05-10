#include <bits/stdc++.h>
using namespace std;
//Restricting Exceptions
void test(int x) throw(int, double, char) {
    if(x==0) throw 'x';
    if(x==1) throw x;
    if(x==-1) throw 1.0;
}
    

int main() {
    try {
        test(1);
        test(0);
        test(-1);
    }
    catch (char c) {  // catch block for char
        cout << "Caught a character: " << c << endl;
    }
    catch (int x) {  // catch block for int
        cout << "Caught an integer: " << x << endl;
    }
    catch (double d) {  // catch block for double
        cout << "Caught a double: " << d << endl;
    }
    return 0;
}
