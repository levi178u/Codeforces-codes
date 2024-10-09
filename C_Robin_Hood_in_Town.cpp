#include <bits/stdc++.h>
#define lli long long int
#define all(v) v.begin(), v.end()
#define sv(v) sort(all(v))

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n; cin>>n;
vector<int> a(n);
int s=0, od=INT_MAX:
for(int i=0;i<n;i++){
    cin>>a[i];
    s +=a[i];
    od=min(od,a[i]);


}
if(s%2){
   cout<< s -=od<<endl;
}else{
    cout<<s<<endl;
}


}