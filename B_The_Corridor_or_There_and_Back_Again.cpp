
// Agar Vizag trip krna h to fir EXPERT bnna pdega pehle ....
//So practice each day :)

#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define nline cout<<"\n";
#define gv(v, n)  vector<int> v(n); for (int i = 0; i < n; i++) { int x; cin>>x; v.push_back(x); }

#define inp(x) for(auto &oo:x)cin>>oo
#define out(x) for(auto &oo:x){cout<<oo<<' ';} cout<<endl;
#define all(v) v.begin(), v.end()
#define rev(v) v.rbegin(), v.rend()
#define sortv(v) sort(all(v))
#define sortvr(v) sort(rev(v))


#define gcd(a,b) __gcd(a,b)
void fastio()
{ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count()); }




void ichigo(){
   int n; cin>>n;
    // int k= INT_MAX;
    vector<int > v;
   while(n--){
    int d,s;
    cin>>d>>s;

    v.push_back(d +(s-1)/2);

   }
   sortv(v);

    cout<<v[0]<<endl;



 
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