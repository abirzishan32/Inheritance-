#include <bits/stdc++.h>
using namespace std;

namespace first_space {
    void func() {
        cout << "Inside first_space" << endl;
    }
}
    
namespace second_space {
    void func() {
        cout << "Inside second_space" << endl;
    }
}

using namespace first_space; //This means that we can use the functions of first_space without using the namespace name

int main() {
    func(); //This will call the function of first_space
    return 0;
}
