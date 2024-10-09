               //CODE BY ICHIGO
#include "bits/stdc++.h" 
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
#define take(x) int x; cin>>x;
#define taken(x) ll x,y; cin>>x>>y;
#define gets(s) string s; cin>>s;
#define getv(v, n)  vector<int> v;for (int i = 0; i < n; i++){ take(x) v.push_back(x);}
#define vinput(v) {for(auto &x:v) cin>>x;}
#define vinput1(v) {for(auto &x:v) cin>>x; v.insert(v.begin(),0);}
#define vcharinput(c,v) char c; cin>>c; v.push_back(c);
#define voutput(v) for(auto &a:v){cout<<a<<' ';} nline
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define sortv(v) sort(all(v))
#define sortvr(v) sort(allr(v))
#define vecsum(x) accumulate(all(x), 0ll);
#define vecmin(x) *min_element(all(x))
#define vecmax(x) *max_element(all(x))
#define vecsum(x) accumulate(all(x), 0ll);
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b))*b
#define fi first 
#define se second 
#define pb push_back 
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
typedef vector<pair<int, int>> vpi;
typedef vector<pair<ll,ll>>vpll;
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
typedef priority_queue<int> max_heap;
typedef priority_queue<int, vector<int>, greater<int>> min_heap;
typedef priority_queue<pair<ll,ll>> pqpll;
typedef list<int> li;
void fastio()
{ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count());}
int nc2(int n){
    return (n*(n-1))/2;
} bool sorted(vi v,int n){
    fr(i,n-1){
        if(v[i]>v[i+1]) return false;
    } return true;
}

//___________________________________________COOK HERE_______________________________________________________
    void ichigo(){ 
      int x,y; cin>>x>>y;
      int n=2*(x-y);
      if(n<0){n=n*(-1);
      }
      cout<<n<<endl;
      
    int c=y;
    while(c !=x+1){
        cout<<c<<" ";
        c++;
    }c=x-1;
    while(c !=y){
        cout<<c<<" ";
        c--;
    }
    nline;
    }
//__________________________________________COOKING DONE_______________________________________________________

signed main(){ 
    fastio();
     take(tc);
     while(tc--){
        ichigo();
     }

}