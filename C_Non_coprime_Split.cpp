
// Agar Vizag trip krna h to fir EXPERT bnna pdega pehle ....
//So practice each day and UPSOLVE :)

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
   int l,r; cin>>l>>r;
int a=1,b=1;

if(r%2==0){
    a= r/2; b= r/2;

}else{

    if(r==l){
        
        for(int i=2;i*i <=r ;i++){
            if(r%i ==0 ){
            
                a=i;
                b= r-i;
                break;
        }
        }
    }else{
        a= (r-1)/2;
        b= (r-1)/2;
    }
}

if(a==1 or b==1){
    cout<<-1<<endl;
}else{
    cout<<a<<" "<<b<<endl;
}
  



 
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