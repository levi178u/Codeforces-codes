
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
    vector<int> t(5);

    for(int i=0;i<5; i++){
        cin>>t[i];
    }

    
    int k; cin>>k;
    

    string ref [5]={"S","M","L","XL","XXL"};

    map<string, int> mp;
    int c=0;
    for(auto &i : ref){
         mp[i] = c;
         c++;
         
    }

   
 
for(int i=0;i<k; i++){
        string s;
        cin>>s;
       int eq= mp[s];
        int j=-1;

    for(int i=0;i<5;i++){

          if(t[i]>0 and (j== -1 or abs(i-eq) <= abs(j-eq))){
        j=i;
         }

    }

    t[j]--;

  cout<<ref[j]<<endl;

}
    


   


  


 
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