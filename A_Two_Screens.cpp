
// Agar Vizag trip krna h to fir EXPERT bnna pdega pehle ....
//So practice each day and UPSOLVE :)

#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define gv(v, n)  vector<int> v(n); for (int i = 0; i < n; i++) { int x; cin>>x; v.push_back(x); }

#define inp(x) for(auto &oo:x)cin>>oo
#define out(x) for(auto &oo:x){cout<<oo<<' ';} cout<<endl;
#define all(v) v.begin(), v.end()
#define rev(v) v.rbegin(), v.rend()
#define sortv(v) sort(all(v))
#define sortvr(v) sort(rev(v))

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
{ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count()); }

lli sum(lli p){

    return (p*(p+1)/2);
    
}



void ichigo(){

string s,t; cin>>s>>t;

if(s >t){
    swap(s,t);
}

int n = s.size(), m= t.size() , c=0, c1=0;

// for(int i=0; i<n ;i++){
//     if(s[i] == t[i] and s == t.substr(0,i+1) ){
//         c++;
//     }else{
//         c1 +=2;
//     }
// }
// int ans = c1 + c + abs(m-n);
// cout<<ans<<endl;
int i=0;
while(i<n){
    if(s[i] == t[i]){
        c++;
    }
    else{
        br
    }
    i++;
}

int ans=0;

if(c){
    c++;
}
    ans = abs(n-i) + abs(m -i) + c;

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
        ichigo();
        gtc++;
    
}
}