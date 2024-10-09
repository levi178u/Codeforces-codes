
// Agar Vizag trip krna h to fir EXPERT bnna pdega pehle ....
//So practice each day :)

#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define nline cout<<"/n";

#define gcd(a,b) __gcd(a,b)
void fastio()
{ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count()); }




void ichigo(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    vi a;

   if(s1[1]=='>'){
    a[s1[0]-65]++;

   }else{

    a[s1[2]-65]++;

   }

   if(s2[1]=='>'){
    a[s2[0]-65]++;

   }else{

    a[s2[2]-65]++;

   }
    if(s3[1]=='>'){
    a[s3[0]-65]++;

   }else{

    a[s3[2]-65]++;

   }

   if(a[0]==a[2]){
    cout<<"Impossible"<<endl;
   }
   else{
    
    for(int i=0;i<3 ; i++){

        if(a[i]==0){
            cout<<(char)a[i]+65;

        }else if(a[i]==1){
            cout<<(char)a[i]+65;

        }else if(a[i]==2){
            cout<<(char)a[i]+65;

        } nline

        
    }
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