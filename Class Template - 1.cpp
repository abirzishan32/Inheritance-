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

template <typename T, int size>


class Array {
public:
    T arr[size];
    
    void fillArray(T value){
        for(int i=0; i<size; i++){
            arr[i] = value;
        }
    }
    
    
    
    void getter(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<' ';
        }
    }
};


int main(){
    Array<int, 5> obj1;
    obj1.fillArray(5);
    obj1.getter();
    cout<<endl;
    
    Array<double, 7> obj2;
    obj2.fillArray(1.4);
    obj2.getter();
    cout<<endl;
    
    Array<string, 4> obj3;
    obj3.fillArray("Meow");
    obj3.getter();
    cout<<endl;

    Array<char, 6> obj4;
    obj4.fillArray('a');
    obj4.getter();
    cout<<endl;
}
