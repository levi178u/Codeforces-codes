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
{ 
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(0); 
    cout.precision(10); 
    srand(chrono::high_resolution_clock::now().time_since_epoch().count()); 
}

lli nc2(lli n){
    return n*(n-1)/2;
}

void ichigo(){
    lli k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;  // Assuming these values are given as input

    lli n = 1;
    for(lli x = l1, y = l2; x <= r1 && y <= r2; x++, y++){
        // Ensure x, y, and k are valid for logarithmic operations
        if (x > 0 && y > 0 && k > 1) {
            n = (lli)((log(y) - log(x)) / log(k));
            cout << n << " ";
        } else {
            cout << 0 << " ";  // Handle cases where log would fail
        }
    }
    nline;
}

signed main(){ 
    fastio();  
    int tc; 
    cin >> tc;  
    while (tc--) {
        ichigo();  
    }
}
