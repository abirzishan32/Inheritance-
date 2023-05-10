#include <bits/stdc++.h>
using namespace std;

void divide (int x, int y, int z){ 
    if( (x-y) != 0){        // if x-y is not equal to zero, then divide z by (x-y)
        int res = z/(x-y);
        cout << res << endl;
    }
    else{           // if x-y is equal to zero, then throw an exception
        throw(x-y);
    }
}
    

int main() {
    try      // try block which will throw an exception
    {       
        divide(10, 20, 30); // this will not throw an exception

        divide(10, 10, 30); // this will throw an exception
    }

    catch(int i){       // catch the exception
        cout << "Exception caught: " << i << endl;      // print the exception
    }
    
    return 0;
}
