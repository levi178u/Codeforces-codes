               //CODE BY ICHIGO
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
#define gv(v, n)  vector<lli> v;for (int i = 0; i < n; i++){ tk(x) v.push_back(x);}
#define inp(x) for(auto &oo:x)cin>>oo
#define out(x) for(auto &oo:x){cout<<oo<<' ';}cout<<endl;
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
// lli kill(vll &x, int m){
//     fr(i,m){
//     x[i]--;
//     }
    
//     return count(all(x),1);
    
// }


// https://www.youtube.com/watch?v=8CxtYzx59yQ

//___________________________________________COOK HERE_______________________________________________________
   
void ichigo(){ 
   tk(n) tk(m);
   lli p=n*m;
   gv(b,p);
//    int c=count(all(b),b[0]);
//    if(c==n*m) {cout<<0<<endl; return;}
    lli ans=0,max1=-1,min1=b[p-1]+1,max2=-1,min2=b[p-1]+1;
    int pos1=0,pos2=0,po1=0,po2=0;
    fr(i,p){
        if(b[i]>max1){
         max1=b[i]; pos1=i ;  
        }else if(b[i]<min1){
            min1=b[i]; pos2=i;
        }
            
    } fr(i,p){
        if(b[i]>max2 and i !=pos1){
            max2=b[i]; 

        }else if(b[i]<min2 and i!=pos2){
            min2=b[i];

        }
    }

    // sortv(b);
    // lli max1=b[p-1],max2=b[p-2],min1=b[0],min2=b[1];
        ans= max(ans,abs(max1-min1)*n*(m-1) +abs(max1-min2)*(n-1));
        ans= max(ans,abs(max1-min1)*m*(n-1) +abs(max1-min2)*(m-1));
        ans= max(ans,abs(max1-min1)*n*(m-1) +abs(min1-max2)*(n-1));
        ans= max(ans,abs(min1 -max1)*m*(n-1)+abs(min1-max2)*(m-1));

        cout<<ans<<endl;

    
    


    
}
//__________________________________________COOKING DONE_______________________________________________________

signed main(){ 
    fastio();
     tk(tc);
     while(tc--){
        ichigo();
     }

}