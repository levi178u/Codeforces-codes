#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 
#define mod 1e9 + 7
#define MOD 1000000007
#define lmax LLONG_MAX
#define lmin LLONG_MIN
#define inf 1e18
#define fr(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define frl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define frr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003
#define tk(x) lli x; cin>>x;
#define gv(v, n)  vector<lli> v; for (int i = 0; i < n; i++) { int x; cin>>x; v.push_back(x); }
#define inp(x) for(auto &oo:x)cin>>oo
#define out(x) for(auto &oo:x){cout<<oo<<' ';} cout<<endl;
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define sortv(v) sort(all(v))
#define sortvr(v) sort(allr(v))
#define vecsum(x) accumulate(all(x), 0ll)
#define vecmin(x) *min_element(all(x))
#define vecmax(x) *max_element(all(x))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b
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
#define nline cout<<"\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define min(a,b) (a<b)? a:b
#define max(a,b) (a>b)? a:b
#define mini(a,b,c) (min(a,b)<c)? min(a,b):c
#define maxi(a,b,c) (max(a,b)>c)? max(a,b):c

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<pair<ll,ll>> vpi;
typedef vector<string> vs;
typedef pair<int, int> pi; 
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

void fastio()
{ ios::sync_with_stdio(false);
 cin.tie(NULL); cout.tie(0);
  cout.precision(10); 
  srand(chrono::high_resolution_clock::now().time_since_epoch().count()); 
}
include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, 
            tree_order_statistics_node_update> ordered_set;

void fastio()
{ ios::sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(0); 
cout.precision(10); 
srand(chrono::high_resolution_clock::now().time_since_epoch().count()); }

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

int bin_search(vector<lli> arr,int data,int si,int ei){
    if(si>ei)
    return -1;
    int mid=si +(ei-si)/2;
    if(arr[mid]==data)
    return mid;
    else if(arr[mid]>data)
    return bin_search(arr,data,si,mid-1);
    return bin_search(arr,data,mid+1,ei);
}

int nc2(int n){
    return (n*(n-1))/2;
} 

bool sorted(vi v,int n){
    fr(i,n-1){
        if(v[i]>v[i+1]) return false;
    } 
    return true;
}



void ichigo(){



    

   





}

//__________________________________________COOKING DONE_______________________________________________________

signed main(){ 
    fastio();
    tk(tc);
    while(tc--){
        ichigo();
    }
}