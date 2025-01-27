#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define vi vector<lli>
#define mod 1e9 + 7
#define inf 1e9+1

#define inp(x) for(auto &oo:x) cin >> oo
#define out(x) for(auto &oo:x) { cout << oo << ' '; } cout << endl;
#define nline cout << "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void fastio() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(0); 
    cout.precision(10);
}

struct ss {
    lli l, r, m;
};

void buri_buri_zaemon() {

    lli n, k;
        cin >> n >> k;

    vi a(n, 1); 
    bool fl = 1;  
    vector<ss> v(k);  
    
   
    for (int i = 0; i < k; ++i) {
        cin >> v[i].l >> v[i].r >> v[i].m;
        v[i].l--;  
        v[i].r--; 
    }

    for (auto &i : v) {
        lli l = i.l;
        lli r = i.r;
        lli m = i.m;
        
        bool found= 0;
        
    
        for (int i= l; i<= r; i++) {
            if (a[i] == m) {
                found = 1;
                break;
            }
        }

        if (found) {
            bool ch = 0;

            for (int i=l;i<=r;i++) {
                if (a[i] != m) {
                    a[i] = m;
                    ch = 1;
                    break;
                }
            }

            if (!ch) {
                fl = 0;
                break;
            }
        }
    }

    if (fl) {
        out(a);  
    } else {
        cout << -1 << endl;
    }
}

signed main() { 
    fastio();
    int tc; 
    cin >> tc;
    
    while (tc--) {
        
        buri_buri_zaemon(); 
    }
   
}
