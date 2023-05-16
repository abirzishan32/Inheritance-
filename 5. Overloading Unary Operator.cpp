#include <bits/stdc++.h>
using namespace std;


class A {
    private:
    int num;
    public:
    A() : num(0) {}
    A(int x) : num(x) {}


    A operator - (){
        A temp;
        temp.val = -val;
        return temp;
    }

    A friend operator - (A obj){
        A temp;
        temp.num = -obj.num;
        return temp;
    }
    //Both of these two functions cannot be declared simultaneously 

    void getNum(){
        cout << num<<endl;
    }
};


int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    A obj(10);
    obj.getNum();
    -obj;
    obj.getNum();
    A ans = -obj;
    ans.getNum();
    return 0;
}
