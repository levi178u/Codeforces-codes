
// Action Beeeeeaammmmm...... beep beep beep beep beep beep beep....

#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 
#define vi vector<lli>
#define vvi vector<vi>
#define gv(v,n)  vi v; for (int i = 0; i < n; i++) { ll xx; cin>>xx; v.push_back(xx); }
#define mod 1e9 +7
#define inf 1e9+1

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

lli nc2(lli n){
    return n*(n-1)/2;
}
ll power(ll a,ll b,ll p=inf)
{   
    if(a>55){
        return inf;
    }
    ll res=1;a%=p;
    while(b>0)
    {
        if(b%2==1)
            res=(res*a)%p;
        a=(a*a)%p;
        b=b/2;
    }
    return res;
}
ll log(ll n,ll k)
{
    ll a=k,b=0;
    while(a<=n)
    {
        a*=k;b++;
    }
    return b;
}


// vector<lli> sieve(ll n )
// {
//     vector<bool> prime(n + 1, true);
//     vector<lli > v;
    
//   for (int p = 2; p * p <= n; p++) {

//         if (prime[p] == true) {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }

//     for (int p = 2; p <= n; p++)
//         if (prime[p]){
//             v.pb(p);

//         }
//         return v;
// }




void ichigo(){
   lli n,k; cin>>n>>k;
    
    lli perm=  power(2, n-1);
    if(perm <k){
        cout<<-1<<endl;
        rn;
    }
    int i=0, j=n-1,c=1;
    int m=n-1;

    vi ans(n);

    while(i<=j){
        if(i==j){
            ans[i]=(c);
        }
        lli p= power(2,m);

        p /=2;
        
        if(k<= p){
            ans[i]=c;
            i++; c++;

        }else{
            ans[j]=c;
            j--; c++;

        k -=p;
        }
        m--;
    }
    
  out(ans);



}
//__________________________________________COOKING DONE_______________________________________________________

signed main(){ 
    fastio();
    int tc; cin>>tc;
    int gtc =1;
    while(tc--){
        // cout << "Case #" << gtc << ": ";
        // bool ans=0;
        ichigo();
//         gtc++;
    
}
}