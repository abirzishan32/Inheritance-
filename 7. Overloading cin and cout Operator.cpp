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

class A{
    private:
    int x;
    int y;
    public:
    A(int a=0, int b=0) {
        x= a;
        y= b;
    }

    friend istream& operator >> (istream& in, A &obj){
        in >> obj.x >> obj.y;
        return in;
    }

    friend ostream& operator << (ostream& out, A &obj){
        out << obj.x <<' '<<obj.y<<endl;
        return out;
    }
};


int main()
{
    A obj;
    cin>>obj;
    cout<<obj<<endl;
    return 0;
}
