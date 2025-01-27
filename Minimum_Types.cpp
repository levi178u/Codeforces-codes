
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

void fastio() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0); }

void ichigo() {
    lli n, x; cin >> n >> x;
    vi a(n), b(n);
    inp(a);
    inp(b);

    vector<pair<lli, lli>> com;
    for (int i = 0; i < n; i++) {
        com.push_back({a[i]*b[i],i});
    }
    svr(com);

    lli sum = 0, c = 0;
    for (auto &i : com) {
        lli it= i.se;
        if (sum >= x) br;

        lli maxi = ceil2(x - sum, a[it]);
        lli mini = min(b[it], maxi);

        sum += mini * a[it];
         c++;
    }

    if (sum >= x) cout << c << endl;
    else cout << -1 << endl;
}

signed main() {
    fastio();
    int tc; cin >> tc;
    while (tc--) {
        ichigo();
    }
}
