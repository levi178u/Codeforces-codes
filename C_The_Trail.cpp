#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 
#define vi vector<lli>
#define vvi vector<vi>
#define gv(v,n)  vi v; for (int i = 0; i < n; i++) { ll xx; cin>>xx; v.push_back(xx); }
#define mod 1e9 +7
#define inf 1e9+1

#define fr(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define frl(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define frr(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
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


#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, 
            tree_order_statistics_node_update> ordered_set;

void fastio()
{ ios::sync_with_stdio(false); 
cin.tie(NULL); 
cout.tie(0); 
cout.precision(10); 
srand(chrono::high_resolution_clock::now().time_since_epoch().count()); }

lli nc2(lli n){
    return n*(n-1)/2;
}

lli m =998244353;

lli fact(lli n){
    if(n==0 or n==1){
        return 1;
    }

    return (fact(n-1)%m*n%m)%m;
}
int bin_search(vector<lli> arr,int data,int si,int ei){
    if(si>ei)
    return -1;
    int mid=si +(ei-si)/2;
    if(arr[mid]==data)
    return mid;
    else if(arr[mid]>data)
    return bin_search(arr,data,si,mid-1);
    return bin_search(arr,data,mid+1,ei);
}

lli nums(lli d, lli n){

    string num="";

    num.append(fact(n), d+'0');

    return stoll(num);


}

lli summ( lli n){

    return n*(n+1)/2;
}


void ichigo(){

lli n, m; cin>>n>>m;

string s; cin>>s;

vector<vi> grid(n, vi (m));

fr(i,n){
    fr(j,m){
        cin>>grid[i][j];
    }
}

vector<pair<lli, lli>> path;

lli x=0, y=0;

path.pb({0,0});

for(auto &i : s){

    if(i=='D'){
        x++;
    }else if(i=='R') {
        y++;
    }

    path.pb({x,y});
}

fr(i,path.sz-1){

    x= path[i].fi, y= path[i].se;

    lli xsum =0;
    lli ysum =0;

    

        if(path[i+1].fi > x){

            fr(j,m) xsum += grid[x][j];

            grid[x][y] -= xsum;

        }else{

            lli ysum =0;

            fr(j,n) ysum += grid[j][y];

            grid[x][y] -= ysum;
        }

        
}

    x= path.back().fi, y= path.back().se;
    
     lli last =0;

        fr(j,n) last += grid[j][y];

        grid[x][y] -= last;


fr(i,n){
    fr(j,m){
        cout<<grid[i][j]<<" ";
    }
    nline;
}







}
  
signed main(){ 
    fastio();
    int tc; cin>>tc;
    while(tc--){
        ichigo();
    }
} 
