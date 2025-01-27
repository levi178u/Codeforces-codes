#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define vi vector<lli>
#define vvi vector<vi>
#define gv(v,n)  vi v; for (int i = 0; i < n; i++) { ll xx; cin>>xx; v.push_back(xx); }
#define mod 1e9 + 7
#define inf 1e9+1

#define fr(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define frl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define frr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)

#define inp(x) for(auto &oo:x)cin>>oo
#define out(x) for(auto &oo:x){cout<<oo<<' ';} cout<<endl;
#define all(v) v.begin(), v.end()
#define rev(v) v.rbegin(), v.rend()
#define sv(v) sort(all(v))
#define svr(v) sort(rev(v))

#define vecsum(x) accumulate(all(x), 0ll)
#define vecmin(x) *min_element(all(x))
#define vecmax(x) *max_element(all(x))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b/gcd(a,b))
#define fi first 
#define se second 
#define pb push_back 
#define cn continue;
#define br break;
#define rn return;
#define in insert
#define pob pop_back 
#define mp make_pair 
#define sz size()
#define ceil2(x,y) ((x+y-1)/(y))
#define nline cout<<"\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define min(a,b) (a<b)? a:b
#define max(a,b) (a>b)? a:b
#define mini(a,b,c) (min(a,b)<c)? min(a,b):c
#define maxi(a,b,c) (max(a,b)>c)? max(a,b):c

typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
typedef vector<string> vs;
typedef pair<lli, lli> pi; 
typedef set<lli> si;
typedef map<int,int> mii;
typedef map<char,int> mci;
typedef map<ll,int> mli;
typedef unordered_map<int,int> umii;
typedef unordered_map<ll,ll> umll;
typedef map<char,int> mci;
typedef map<int,vector<int>> miv;
typedef map<vector<int>,int> mvi;
typedef map<ll,vector<ll>> mlv;
typedef map<vector<ll>,ll> mvl;
typedef priority_queue<lli> max_heap;
typedef priority_queue<int, vector<int>, greater<int>> min_heap;
typedef priority_queue<pair<ll,ll>> pqpll;
typedef list<int> li;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, 
            tree_order_statistics_node_update> ordered_set;

void fastio() { 
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(0); 
    cout.precision(10); 
    srand(chrono::high_resolution_clock::now().time_since_epoch().count()); 
}

lli nc2(lli n){
    return n*(n-1)/2;
}

lli m =998244353;
lli fact(lli n){
    if(n==0 or n==1){
        return 1;
    }
    return (fact(n-1)*n%m)%m;
}

int bin_search(vector<lli> arr, int data, int si, int ei){
    if(si>ei)
        return -1;
    int mid = si + (ei - si) / 2;
    if(arr[mid] == data)
        return mid;
    else if(arr[mid] > data)
        return bin_search(arr, data, si, mid-1);
    return bin_search(arr, data, mid+1, ei);
}


pi bs(lli l, lli r, int base) {
    if (r - l + 1 < base) {
        return {0, 0};
    }
    if (r - l + 1 == 1) {
        return {l, 1};
    }
    lli mid = l + (r - l) / 2;

    if ((r - l + 1) % 2) {

       pi lv = bs(left, mid - 1, base);

        lli sum = mid + 2 * lv.fi + mid * lv.se;

        int seg= 2 * lv.se + 1;

        return {sum, totalSegments};

    } else {
       pi lv = bs(left, mid, base);

        lli sum = 2 * lv.fi + mid * lv.se;
        int seg= 2 * lv.se;
        return {sum, seg};
    }
}

void ichigo() {
    lli n, k;
    cin >> n >> k;
    pi ans = bs(1, n, k);
    cout << ans.f << endl;
}

signed main() { 
    fastio();  
    int tc; 
    cin >> tc;  
    while (tc--) {
        ichigo();  
    }
    return 0;
}
