
// Agar Vizag trip krna h to fir EXPERT bnna pdega pehle ....
//So practice each day :)

#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define nline cout<<"\n";

#define gcd(a,b) __gcd(a,b)
void fastio()
{ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count()); }




void ichigo(){
    int n; cin>>n;

    vector<int> a(n);
    for(int i=0;i<n ;i++){
        cin>>a[i];
    }
    int c[3]={0};
      for(auto &i :a){
        c[i%3]++;
      }
      int ans = c[0]/2 + min(c[1],c[2]);

    cout<<ans<<endl;

  


 
}
//__________________________________________COOKING DONE_______________________________________________________

signed main(){ 
    fastio();
    // int tc; cin>>tc;
    int gtc =1;
    // while(tc--){
        // cout << "Case #" << gtc << ": ";
        // bool ans=0;
        ichigo();
        gtc++;
    
}