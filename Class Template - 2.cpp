#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define div 1000003
#define mod 1000000007
#define MOD 998244353
#define N 10000005
#define fr(i,a,b) for(int i = a;i<b;i++)
#define fri(i,a,b) for(int i = a;i>=b;i--)
#define pb push_back
#define pyn(flag) cout<<(flag?"YES":"NO")<<endl;
#define vin cin>>v[i]
#define vsort sort(v.begin(), v.end())
#define vrev reverse(v.begin(), v.end())
#define yout cout<<"YES"<<endl
#define nout cout<<"NO"<<endl

const int SIZE = 10;
template <typename type>

class Stack {
private:
    type stack[SIZE];
    int top;
public:
    Stack(){
        top = 0;
    }
    
    void push(type value){
        if (top == SIZE) {
            cout << "Stack is full" << endl;
            return;
        }
        stack[top] = value;
        top++;
    }
    
    type pop(){
        if (top == 0) {
            cout<< "Stack is empty" << endl;
            return 0;
        }
        top--;
        return stack[top];
    }
};



int main(){
    Stack<int> st1;
    st1.push(10);
    st1.push(12);
    st1.push(16);
    st1.push(5);
    st1.push(9);
    for(int i=0; i<5; i++) cout << st1.pop() <<' ';
    cout<<endl;
    
    
    Stack<char> st2;
    st2.push('a');
    st2.push('e');
    st2.push('i');
    st2.push('o');
    st2.push('u');
    for(int i=0; i<5; i++) cout << st2.pop() <<' ';
    cout<<endl;
    
    
    Stack<double> st3;
    st3.push(0.8);
    st3.push(1.7);
    st3.push(3.6);
    st3.push(1.2);
    st3.push(4.6);
    for(int i=0; i<5; i++) cout << st3.pop() <<' ';
}
