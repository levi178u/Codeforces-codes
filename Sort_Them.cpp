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
void fastio() { 
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0); 
    cout.precision(10); 
}

void solve() {
    lli n; 
    cin >> n;

    string s, p; 
    cin >> s >> p;

    vi v(26, 0);
    for (int i = 0; i < 26; i++) {
        v[p[i] - 'a'] = i;
    }

    vector<char> f(26);

    for (int i = 0; i < 26; i++) {
        f[i] = p[25 - v[i]];
    }

    vvi dp(2, vi(26, inf));
    vi mdp(26, inf);

    for (int i = 0; i < 26; i++) {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        int curr = i % 2;
        int prev = 1 - curr;
        fill(all(dp[curr]), inf);

        char c1 = s[i - 1];
        char c2 = f[s[i - 1] - 'a'];
        vi gg(26, inf);

        gg[0] = dp[prev][0];
        for (int idx = 1; idx < 26; ++idx) {
            gg[idx] = min(gg[idx - 1], dp[prev][idx]);
        }


        for (char c : {c1, c2}) {
            int cost = (c != c1) ? 1 : 0;
            int id = c - 'a';
            if (gg[id] + cost < dp[curr][id]) {
                dp[curr][id] = gg[id] + cost;
            }
        }

  
        mdp[0] = dp[curr][0];
        for (int i = 1; i < 26; i++) {
            mdp[i] = min(mdp[i - 1], dp[curr][i]);
        }
    }

  
    lli minu= inf;
    for (int i = 0; i < 26; i++) {
        minu= min(minu, dp[n % 2][i]);
    }

    if (minu>= inf / 2) {
        cout << -1 << endl;
    } else {
        cout << minu<< endl;
    }
}

signed main() { 
    fastio();
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
}
