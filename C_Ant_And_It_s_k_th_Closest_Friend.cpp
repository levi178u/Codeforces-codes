#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bin(x,y)  bitset<y>(x) 
using namespace std;
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!



void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================


class DisjointSet{
    vector<long long> rank,parent;
public: 
    DisjointSet(long long n) {
        parent.resize(n,-1);
    }
    long long findPar(long long node) {
        if(parent[node]<0) return node;
        return parent[node] = findPar(parent[node]);
    }
    void unionRank(long long u,long long v) {
        long long p_u = findPar(u);
        long long p_v = findPar(v);
        if(p_u==p_v) return;
        if(abs(parent[p_u])<abs(parent[p_v])) {
            parent[p_u] = v;
            parent[p_v] = (abs(parent[p_u])+abs(parent[p_v]))*(-1);
        }
        else {
            parent[p_v] = u;
            parent[p_u] = (abs(parent[p_u])+abs(parent[p_v]))*(-1);
        }
    }
};

void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while(q--){
        int p;
        cin>>p;
        k--;
        auto itl = lower_bound(v.begin(),v.end(),p-k);
        int lower = itl-v.begin()-1;
        auto itg = upper_bound(v.begin(),v.end(),p+k);
        int upper = itg-v.begin();
        int a = (lower>=0) ? p-v[lower] : INT_MAX;
        int b = (upper<n) ? v[upper]-p : INT_MAX;
        // cout<<a<<"-"<<b<<" ";
        cout<<min(a,b)<<endl;
    }
}

int32_t main()
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    // int T = 1;
    // cin >> T;
    // while (T--)
    // {
        solve();
    // }
    return 0;
}

    