
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
bool isass(vi a){
    for(int i=0;i<a.sz-1;i++){
        if(a[i]>a[i+1]){
            return 0;
        }
    }
    return 1;
}
bool isdes(vi a){
    for(int i=0;i<a.sz-1;i++){
        if(a[i]<a[i+1]){
            return 0;
        }
    }
    return 1;
}
// void SieveOfEratosthenes(ll n, vector<ll > &v)
// {
//     vector<bool> prime(n + 1, true);
    
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
            
// }
// long long power(long long a, long long b, int mod) {
// long long result = 1;
// a = a % mod;  
// while (b > 0) {
//  if (b % 2 == 1) {
//  result = (result * a) % mod;
// }
//  b = b >> 1; 
// a = (a * a) % mod; 
// }
// return result;
// }
// ll bc(int n, int k) {
// if (k > n || k < 0 ) return 0;
// ll numerator = pre[n];
// ll denominator = (pre[k] * pre[n - k]) % mod;
// return (numerator * mmi(denominator, mod)) % mod;
// }
// ll ad(ll a,ll b){
//     return ((a%mod) + (b%mod)+mod)%mod;
// }
// ll mul(ll a,ll b){
//     return ((a%mod) *(b%mod))%mod;
// }
// ll ceil(ll n,ll k){
// if(n%k==0){
//  return n/k;
// }
//  else{
// return (n/k)+1;
// }
// }
// bool comp (pair<ll,ll>a,pair<ll,ll>b){
// if(max(a.first,a.second)>max(b.first,b.second)){
//  return false;
// }
// else if(max(a.first,a.second)==max(b.first,b.second)){
// if(min(a.first,a.second)>=min(b.first,b.second)){
// return false;
// }
// else{
// return true;
// }
// }
// else{
// return true;
// }
// }

void CS_GO(){

int n; cin>>n;





}
//__________________________________________COOKING DONE_______________________________________________________

signed main(){ 
    fastio();
    int tc; cin>>tc;
    int gtc =1;
    while(tc--){
        // cout << "Case #" << gtc << ": ";
        // bool ans=0;
        CS_GO();
//         gtc++;
    
}
}