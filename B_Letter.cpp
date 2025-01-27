
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
   string s1,s2;
   getline(cin, s1);
   getline(cin, s2);

    bool fl=0;
   
   map<char ,int > mp1;
   map<char, int> mp2;

   for(char &i : s1){
    if(i != ' '){
        mp1[i]++;
    }
   }
    for(char &i : s2){
    if(i != ' '){
        mp2[i]++;
    }
   }
   
  for(auto &i : mp2){
    if(mp1[i.first]< i.second){
       fl=1;
    }
  }

  if(fl){
    cout<<"NO"<<endl;
  }
else{
    cout<<"YES"<<endl;
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