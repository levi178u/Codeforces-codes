
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
// int check(string &s){

//     bool fl=0;

//     for(int i=0;i<s.sz ;i++){
//         if(s[i] !=s[s.sz-i-1]){
//             fl=1; br
//         }
//     }
//     return fl;
// }

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
   lli n; cin>>n;

   vi r1(n),r2(n);

    inp(r1);
    inp(r2);

//     svr(r1); sv(r2);
    
//     lli ops= 0;

//    ops = r1[0] +r2[n-1];

//    for(int i=1;i<n-1 ; i++){

//     if(r1[1] >= r2[0]){
//         ops += r1[1];
//         cn;
//     }else{
//         ops += r2[0];
//         cn;
        
//     }

//     if(r1[n-1] >= r2[n-2]){
//         ops += r1[n-1];
//         cn;

//     }else{
//         ops += r2[n-2];
//         cn;

//     }

//     if(r1[i] > r2[i]){
//         ops += r1[i];
//     }else{
//         ops += r2[i];
//     }
//    }
   
// cout<<ops<<endl;


lli mx=LLONG_MIN, ops=0;


for(int i=0;i<n ; i++){
    if(r1[i]  > r2[i]){
        ops += r1[i];
        mx = max(mx, r2[i]);
    }
        
    else{
        ops += r2[i];
         mx = max(mx, r1[i]);

    }
}

ops += mx;
 

 cout<<ops<<endl;





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