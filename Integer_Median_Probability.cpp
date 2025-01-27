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
    ios::sync_with_stdio(0); 
    cin.tie(NULL); 
    cout.tie(0); 
    cout.precision(10); 
    srand(chrono::high_resolution_clock::now().time_since_epoch().count()); 
}

lli nc2(lli n){
    return n*(n-1)/2;
}

const int mm= 998244353;

void buri_buri_zaemon(){
   
    lli n, d, l;
    cin >>n>>d>>l;
    bool fl = 0;
    vector<pair<lli, lli>> edges;

    if(d == 1){ 
        if(n ==2 and l ==2){ 
            edges.pb({1, 2}); 
            fl = 1; 
        }
    }
  
    else if(d == 2){ 
        if(l == n - 1 and n >= 3){ 
            for(int i = 2; i <= n; i++){ 
                edges.pb({1, i}); 
            } 
            fl = 1;
        } 
    }
   
    else { 
        if(l < 2 or l > n - d + 1){ 
            fl = 0;
        } else { 
            for(int i = 1; i < d; i++){ 
                edges.pb({i, i + 1}); 
            } 
            ll curr = d + 2, node = 2, leaf = l - 2;

            while(leaf and curr <= n){ 

                edges.pb({node, curr}); 
                
                curr++; 
                leaf--; 
                node++; 

                if(node == d + 1){ 
                    node = 2; 
                }
            }

            if(curr <= n){ 

                while(curr <= n){ 

                    edges.pb({2, curr}); 
                    curr++; 
                } 
            }

            if(edges.size() == n - 1){ 

                fl = 1; 
            }
        } 
    }

    if(fl){ 
        vector<int> deg(n + 1, 0); 
        for(auto &i: edges){ 
            deg[i.fi]++; 
            deg[i.se]++; 
        }

        int c = 0;
        for(int i = 1; i <= n; i++){ 
            if(deg[i] == 1){ 
                c++; 
            } 
        }

        if(c == l){ 
            for(auto &i: edges){ 
                cout << i.fi << " " << i.se << endl; 
            } 
        } else { 
            cout << -1<< endl; 
        }
    } else { 
        cout <<-1<< endl; 
    } 
}

signed main(){ 
    fastio();
    int tc; 
    cin >> tc;
    while(tc--){
        buri_buri_zaemon();
    }
}
