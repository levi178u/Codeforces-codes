

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
{ 
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(0); 
    cout.precision(10); 
    srand(chrono::high_resolution_clock::now().time_since_epoch().count()); 
}

int check(string &s) {
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i-1]) {
            return 0;
        }
    }
    return 1;
}

void ichigo() {
    lli n; 
    cin >> n;
    string s; 
    cin >> s;

    string s1 = "", s2 = "";
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            s1 += '0';
            s2 += '1';
        } else {
            s1 += '1';
            s2 += '0';
        }
    }

    vi a, b;
    for(int i = 0; i < n; i++) {
        if(s[i] != s1[i]) {
            a.pb(i);
        }
        if(s[i] != s2[i]) {
            b.pb(i);
        }
    }

    if(a.empty() or b.empty()) {
       yes;
       rn;
    }

    bool fl = 0;
    string rs = s;

    if(!a.empty()) {
        int l = a.front();
        int r = a.back();
        reverse(s.begin() + l, s.begin() + r + 1);
        fl = check(s);
    }

    if(!fl and !b.empty()) {
        int l = b.front();
        int r = b.back();
        reverse(rs.begin() + l, rs.begin() + r + 1);
        fl = check(rs);
    }

    if(fl) {
       yes;
       rn;
    } else {
        no;
    }
}

signed main() { 
    fastio();  
    int tc; 
    cin >> tc;  
    while (tc--) {
        ichigo();  
    }
}
