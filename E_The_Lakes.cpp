#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>

#define gcd(a,b) __gcd(a,b)
void fastio()
{ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count()); }



int vol(int i, int j, vvi &dd){
    
    int n= dd.size();
    int m= dd[0].size();

    if(i >= n or j >=  m or i <0 or j < 0 or dd[i][j]==0){
        return 0;
    }
    int sum = dd[i][j];
    dd[i][j]=0;

        sum += vol(i-1,j,dd);
        sum += vol(i+1,j,dd);
        sum += vol(i,j-1,dd);
        sum += vol(i,j+1,dd);

    return sum;

}

void ichigo(){
int n,m; cin>>n>>m;

vvi d(n, vi (m));

for(int i=0;i<n;  i++){
    for(int j=0 ;j<m ;j++){
        cin>>d[i][j];
    }
}

int sum=0,ans=0;

for(int i=0;i<n; i++){
    for(int j=0 ;j<m ;j++){

           if(d[i][j] !=0)  ans= max(ans, vol(i,j,d));

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
        ichigo();
        gtc++;
    }
}