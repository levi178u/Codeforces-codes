#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 

#define gcd(a,b) __gcd(a,b)
void fastio()
{ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count()); }

//Revise this ques

void ichigo(){
int n; cin>>n;
vector<ll> l;
// map<int , int> fq;

for(int i=0;i<n ;i++){
    int x; cin>>x;
    l.push_back(x);
    // fq[x]++;
}


for(int i=0; i<=n ;i++){
    int c=0;

    for(int j=0; j<n; j++){

        if(l[j]> i){
            c++;
        }
    }
    if(c==i){
        cout<<i<<endl; return;
    }


}
cout<<-1<<endl;










    
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