#include <bits/stdc++.h>
using namespace std;

//Multiple Catch Statements
void test(int x){
    try{
        if(x==1) throw x;       // int

        else if(x==0) throw 'x';    // char

        else if(x==-1) throw 1.0;   // double
        

    }

    catch(char c){      // catch block for char
        cout<<"Caught a character"<<endl;
    }

    catch(int x){       // catch block for int
        cout<<"Caught an integer"<<endl;
    }

    catch(double d){        // catch block for double
        cout<<"Caught a double"<<endl;
    }

    catch(...){     // This catch block will catch all the exceptions thrown above if we only use this one.
        cout<<"Caught an exception"<<endl;
    }


}
    

int main() {
    test(1);
    test(0);
    test(-1);
    
    return 0;
}
