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
lli n,x,y; cin>>n>>x>>y;

lli num = y-n+1;
if(num*num+n-1 <x or y<n){
    cout<<-1<<endl;
}else{

    for(int i=1;i<n;i++){
        cout<<1<<endl;
    }
    cout<<num<<endl;
}










 
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