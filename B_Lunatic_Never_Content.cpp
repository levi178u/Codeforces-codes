#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 

#define gcd(a,b) __gcd(a,b)
void fastio()
{ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count()); }




void ichigo(){
    int n; cin>>n;
    vector<int > num;
    lli maxu = LLONG_MIN;
    for(int i=0;i<n;i++){ 
        int x; cin>>x; 
        num.push_back(x);
        
    }
    int i=0,j =n-1;
    bool fl=1;
    int div=0;

  
    while(i<j){
         div= gcd(div,abs(num[i]- num[j]));
        i++, j--;
       
    }
    cout<<div<<endl;
   
    
   
   

    
 
  

    
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