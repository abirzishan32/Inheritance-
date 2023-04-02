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

class Matrix {
    private:
    int** data;
    int row, col;
    public:
    Matrix(int r, int c){
        row = r;
        col = c;
        data = new int* [row];
        for(int i=0; i<row; i++){
            data[i] = new int[col];
        }
    }
    int* operator [] (int row){
        return data[row];
    }
};


int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Matrix arr(3,3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int temp;
            cin>>temp;
            arr[i][j] = temp;
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << std::endl;
    }


    return 0;
}
