// Agar Vizag trip krna h to fir EXPERT bnna pdega pehle ....
//So practice each day :)

#include <bits/stdc++.h>
using namespace std; 

#define lli long long int
#define vi vector<int>
#define gv(v, n) vector<lli> v(n); for (int i = 0; i < n; i++) cin >> v[i];

void fastio() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(0);
    cout.precision(10);
}

void ichigo() {
    lli n; 
    cin >> n;
    gv(a, n);
    gv(b, n);

    vector<pair<lli, lli>> vp;

    for (int i = 0; i < n; i++) {
        vp.push_back({a[i] + b[i], i});
    }
    
    sort(vp.rbegin(), vp.rend());

    bool fl = 1;
    lli ans = 0;

    for (int i = 0; i < n; i++) {
        if (fl) {
            ans += a[vp[i].second] - 1;
        } else {
            ans -= b[vp[i].second] - 1;
        }
        fl = !fl;
    }
    
    cout << ans << endl;
}

signed main() { 
    fastio();
    int tc; 
    cin >> tc;
    for (int gtc = 1; gtc <= tc; gtc++) {
        // cout << "Case #" << gtc << ": "; // Uncomment if needed
        ichigo();
    }
}
