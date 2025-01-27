
// BURI_BURI_ZAEMON

#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 
#define vi vector<lli>
#define vvi vector<vi>
#define gv(v, n)  vi; for (int i = 0; i < n; i++) { ll xx; cin>>xx; v.push_back(xx); }
#define mod 1e9 +7

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



void fastio()
{ ios::sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(0); 
cout.precision(10); 
srand(chrono::high_resolution_clock::now().time_since_epoch().count()); }


void buri_buri_zaemon(){

int n,k; cin>>n>>k;

vi a(n); inp(a);


int maxi = 0;
vector<pair<int , int>> vp;

map<int , int> mp;
for(auto &i : a){
    mp[i]++;
}
 for(auto &i :mp){
        vp.pb({i.fi,i.se});

        maxi= max(maxi ,i.se);
    }

int i=0,j=0;
int ans=0;
int curr= 0;

for(int i=0 ; i< vp.size() ;i++){
    if(!i){

        curr = vp[i].se;
        
    }else{

        if(vp[i].fi - vp[i-1].fi ==1){

                curr += vp[i].se;

            if(i-j ==k){
                curr -=vp[j++].se;

            }
        }else{
            curr = vp[i].se;

            j =i;

        }
       
    }
     ans= max(ans, curr);
} 

cout<<ans<<endl;


 
}
//__________________________________________COOKING DONE_______________________________________________________

signed main(){ 
    fastio();
    int tc; cin>>tc;
    int gtc =1;
    while(tc--){
        // cout << "Case #" << gtc << ": ";
        // bool ans=0;
        buri_buri_zaemon();
        gtc++;
    
}
}