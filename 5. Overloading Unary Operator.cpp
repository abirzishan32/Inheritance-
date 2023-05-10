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

#define pb push_back
#define N 10000005
#define div 1000003
#define mod 1000000007
#define MOD 998244353
#define fr(i,a,b) for(int i = a;i<b;i++)
#define fri(i,a,b) for(int i = a;i>=b;i--)
#define pyn(flag) cout<<(flag?"YES":"NO")<<endl;
#define vrev reverse(v.begin(), v.end())
#define vin cin>>v[i]
#define vsort sort(v.begin(), v.end())
#define yout cout<<"YES"<<endl
#define nout cout<<"NO"<<endl;

class A {
    private:
    int num;
    public:
    A() : num(0) {}
    A(int x) : num(x) {}


    A operator - (){
        num = -num;
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
