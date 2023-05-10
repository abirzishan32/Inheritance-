#include <bits/stdc++.h>
using namespace std;


//Nested Namespaces

namespace first_space {
    void func1() {
        cout << "Inside first_space" << endl;
    }
    namespace second_space{
        void func2(){
            cout<< "Inside second_space" << endl;
        }
    }
}
    

int main() {
    first_space :: func1();  // calling function from first namespace
                            // Here you cant call func2() directly
                            
    first_space :: second_space :: func2();  // calling function from second namespace
                                            // Here you can call func2() directly
    return 0;
}
