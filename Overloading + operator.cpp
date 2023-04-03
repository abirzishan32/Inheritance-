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

class Rectangle {
    private:
    int length;
    int width;


    public:
    Rectangle() : length(0), width(0) {}
    Rectangle(int l, int w) : length(l), width(w) {}

    void display() {
        cout << length << " " << width << endl;
    }

    Rectangle operator + (Rectangle obj){
        Rectangle temp;
        temp.length = length + obj.length;
        temp.width = width + obj.width;
        return temp;
    }

    Rectangle friend operator + (Rectangle obj, int value){
        Rectangle temp;
        temp.length = value + obj.length;
        temp.width = obj.width;
        return temp;
    }


};


int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Rectangle r1(3, 4);
    Rectangle r2(5, 6);
    Rectangle r3 = r1 + r2;
    r3.display();
    Rectangle r4 = r1 + 3;
    r4.display();
    return 0;
}
