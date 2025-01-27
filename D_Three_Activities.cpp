
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

// int jimjam(vi &a, vi &b ,vi&c){
//     int ma=0,mb=0,mc=0;

//     ma = *max_element(all(a));
//     mb = *max_element(all(b));
//     mc = *max_element(all(c));

//     int mx=0;

//     if(ma > mb){
//         if(ma > mc){
//             mx= ma;
//         }else if(ma <mc){
//             mx= mc;
//         } 
//     }
//      if(mb > ma){
//         if(mb > mc){
//             mx= mb;

//         }else if(mb <mc){
//             mx= mc;
//         } 
//     }
//     return mx;

// }



void ichigo(){
   int n; cin>>n;

    vector<pair<int ,int>> a(n), b(n) , c(n);
    
     
     for(int i=0; i<n ;i++){
        int x; cin>>x;
        a.push_back({x,i});
        
     }
     for(int i=0; i<n ;i++){
        int x; cin>>x;
        b.push_back({x,i});
        
     }
     for(int i=0; i<n ;i++){
        int x; cin>>x;
        c.push_back({x,i});
        
     }

     sortvr(a);
     sortvr(b);
     sortvr(c);

        int ans=0, sum=0;
     for(int x=0; x<=3 ;x++){
        
        for(int y=0; y<=3 ;y++){
            if(a[x].second == b[y].second){
                continue;
            }

            for(int z=0 ;z<=3 ;z++){
                if(c[z].second == b[y].second or c[z].second == a[x].second ){
                    continue;
                }

                sum = a[x].first+b[y].first +c[z].first;
                ans = max(ans ,sum);

            }
        }
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