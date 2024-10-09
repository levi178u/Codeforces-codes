#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>

#define gcd(a,b) __gcd(a,b)
void fastio()
{ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count()); }


bool check(int n, int m){
  if(n ==m){
    return 1;
  }else if(n%3){
    return 0;
  }
  else{
    return (check(n/3, m) or
    check(2*n/3, m) ) ;
}
}

void ichigo(){
    
lli n,m; cin>>n>>m;


if(check(n,m)){
     cout<<"YES"<<endl; 
}else{
    cout<<"NO"<<endl;
}

 
}
//__________________________________________COOKING DONE_______________________________________________________

signed main(){ 
    fastio();
    int tc; cin>>tc;
    int gtc =1;
    while(tc--){
        // cout << "Case #" << gtc << ": ";
        bool ans=0;
        ichigo();
        gtc++;
    }
}