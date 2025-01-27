#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

lli sol(vector< lli > h, lli n , lli k ,vector< lli > dp){


  if(n == 0){
    return 0;
  }

  if(dp[n] != -1){
    return dp[n];
  }

  lli ans =LLONG_MAX;

  for(lli i =1; i<=k and n-i >=0; i++){

    ans = min(ans, abs(h[n] - h[n-i]) + sol(h, n-i, k,dp));
  }

 return dp[n]= ans ;
  
}



void ichigo() {
  
  lli n, k; cin>>n>>k;

  vector< lli > v(n);
  
  for(lli i =0; i<n ;i++){
    cin>>v[i];
  }

  vector< lli > dp(n,-1);

  cout<<sol(v, n-1, k, dp)<<endl;
}

signed main() {

  ichigo();
}
