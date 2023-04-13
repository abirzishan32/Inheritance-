#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <array>
#include <vector>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>

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

template <typename T>


void Sort(T arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}


int main(){
    int a1[] = {5,7,1,4,2,9,12};
    Sort(a1, 7);
    for(int i=0; i<6; i++) cout<<a1[i]<<' ';
    
    cout<<endl;
    
    double a2[] = {1.1,9.12,9.13,6.3,2.1,4.9,4.1,1.5};
    Sort(a2, 8);
    for(int i=0; i<6; i++) cout<<a2[i]<<' ';
    

}
