#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 

#define gcd(a,b) __gcd(a,b)
void fastio()
{ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count()); }


void ichigo(){
int n,m; cin>>n>>m;
bool fl=1;

if(n==1 or m==1){
   cout<<"yes"<<endl;
}else if(n<=m){
   cout<<"no"<<endl;
}else{
    
    for(int i=2;i<=m;i++){
        if(n%i==0){
            fl=0; 
        }
    }

if(fl){
    cout<<"yes"<<endl;

}else{
    cout<<"no"<<endl;
}


}





    
}
//__________________________________________COOKING DONE_______________________________________________________

signed main(){ 
    fastio();
    int tc; cin>>tc;
    int gtc =1;
    while(tc--){
        // cout << "Case #" << gtc << ": ";
        ichigo();
        gtc++;
    }
}