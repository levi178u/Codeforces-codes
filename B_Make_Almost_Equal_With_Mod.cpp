#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define fi first
#define se second
#define up unordered_map
#define us unordered_set
typedef vector<int> vi;
typedef vector<long long> vll;
typedef long long ll;
typedef pair<int,int> ii;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;


void solve(){
    
    lli n; cin>>n;

    vi l(n); inp(l);

    set<lli>r;  

     for(int i=0;i<n ;i++) {
        lli x; cin>>x;   
        r.in(x);
    } 

    vi c(n); inp(c);

    sv(l);   sv(c);

    vi d;

    for(int i=n-1;i>=0;i--){
        int R=(r.upper_bound(l[i]));
        d.push_back(*R-l[i]);
        r.erase(R);
    }
    sort(d.begin(),d.end());
    ll wt=0;
    for(int i=0;i<n;i++){
        wt+=1ll*c[i]*d[n-1-i];
    }
    cout<<wt<<endl;
}
int main() {
    int t;
    cin>>t;
   for(int i=1;i<=t;i++){
solve();
   }
}
