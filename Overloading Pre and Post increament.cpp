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

class Counter{
    private:
    int count;
    public:
    Counter(int x=0){
        count = x;
    }
    Counter operator ++ (){
        Counter temp;
        temp = count++; //overloading postfix increament operator
        return temp;
        //Or simply, return Counter(count++);
    }

    Counter operator ++ (int){
        Counter temp;
        temp = ++count;
        return temp;
        //Or simply, return Counter(++count);
    }

    int getCount(){
        return count;
    }
};


int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Counter obj(20);
    obj++;
    cout << obj.getCount() << endl;
    ++obj;
    cout << obj.getCount() << endl;
    return 0;
}
