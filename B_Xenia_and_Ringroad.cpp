#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>

#define gcd(a,b) __gcd(a,b)
void fastio()
{ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count()); }


void ichigo(){
int n,m; cin>>n>>m;


vector<int > loc;
for(int i=0;i<m ;i ++){
    lli x; cin>>x;
    loc.push_back(x);
    
}
lli ans= loc[0]-1, diff=0;
for(int i=1; i<m  ;i++){
    
    diff= loc[i] - loc[i-1];
    if(diff >=0){
        ans += diff;
    }else{
        ans += n-  abs(diff);
    }


}
cout<<ans<<endl;






 
}
//__________________________________________COOKING DONE_______________________________________________________

signed main(){ 
    fastio();
    // int tc; cin>>tc;
    int gtc =1;
    // while(tc--){
        // cout << "Case #" << gtc << ": ";
        ichigo();
        gtc++;
    // }
}