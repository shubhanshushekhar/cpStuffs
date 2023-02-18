#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

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
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
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


#define int int64_t
#define vi vector<int>
#define vb vector<bool>
#define vbb vector< vector<bool> >
#define all(x) (x).begin(), (x).end()
#define vii vector< vector<int> >
#define vpii vector< pair<int,int> >
#define v2d(dp, n, m) vector< vector<int> > dp(n, vector<int>(m,0))
#define ff first
#define ss second
#define pii pair<int64_t, int64_t>
#define mii map<int,int>
#define miv map<int, vector<int> >
#define mp make_pair
#define pb push_back
#define prr(x) cout << (#x) <<'    ' << (x) << endl
#define pr(x) cout  << (x) << endl
#define f(i,n) for(i=0;i<n;i++)
#define pqb priority_queue<int>
#define iter(x,it) for(auto it: x)
#define rep(i,x,n) for(int i = x; i < n; i++)
#define pqs priority_queue<int,vi,greater<int> >
#define setbits(x)  __builtin_popcountll(x)
#define zrobits(x)  __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x) int x; cin>>x; while(x--)
#define FIO  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int dr8[] = {1,1,0,-1,-1,-1, 0, 1};
int dc8[] = {0,1,1, 1, 0,-1,-1,-1};
int dr4[] = {1,0,0,-1};
int dc4[] = {0,1,-1,0};
int gcd(int a, int b)
{
    if(a%b==0) return b;
    return gcd(b, a%b);
}
void solve();

int32_t main()
{
    FIO;
    int t=1;
    // cin >> t;
    for(int i=1;i<=t;i++)
    {
        solve();
        cout << endl;
    }
}

void solve()
{
    int i, n, j, m, k=2, l=0, t;
    string s;
    cin >> s;

    while (s.length() != 1 ) {
        k=0;
        l++;
        f(i,s.length()) {
            k += s[i]-'0';
        }

        s = to_string(k);
    }
    
    cout << l;
     
}
