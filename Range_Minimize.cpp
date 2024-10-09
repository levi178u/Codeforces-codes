
#include <bits/stdc++.h>
using namespace std; 
#define lli long long int
void f(){
int n; cin>>n;

vector<int> v(n);
for(int i=0;i<n; i++){
    
    cin>>v[i];
}
sort(v.begin(), v.end());

int p1=v[n-3]-v[0];
int p2= v[n-2]-v[1];
int p3= v[n-1]- v[2];

int ans= min(p1, min(p2,p3));

cout<<ans<<endl;



}

int main(){
    int t; cin>>t;
    while(t--){
        f();
    }
}
