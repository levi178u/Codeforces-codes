
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
   int n,k; cin>>n>>k;

   vector<int > a(n), b(n);
   int sum =0, maxi= -1e3 ,y= 0, ans=0;

   for(int i=0; i<n; i++){
    cin>>a[i];

   }
   for(int i=0; i<n; i++){
    cin>>b[i];
    
   }
    

    for(int i=1; i<= min(n,k) ;i++){
        sum += a[i-1];

        maxi= max(maxi ,b[i-1]);
        y= sum + (k-i)* maxi;
        ans= max(ans, y);
    }

    cout<<ans<<endl;




 
}
//__________________________________________COOKING DONE_______________________________________________________

signed main(){ 
    fastio();
    int tc; cin>>tc;
    int gtc =1;
    while(tc--){
        // cout << "Case #" << gtc << ": ";
        // bool ans=0;
        ichigo();
        gtc++;
    
}
}