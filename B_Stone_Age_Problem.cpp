#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define vi vector<lli>
#define vvi vector<vi>
#define gv(v, n)  vi v; for (int i = 0; i < n; i++) { ll xx; cin >> xx; v.push_back(xx); }
#define mod 1e9 + 7
#define inf 1e9 + 1
#define inp(x) for(auto &oo : x) cin >> oo
#define out(x) for(auto &oo : x) { cout << oo << ' '; } cout << endl;
#define all(v) v.begin(), v.end()
#define rev(v) v.rbegin(), v.rend()
#define sv(v) sort(all(v))
#define svr(v) sort(rev(v))
#define vecsum(x) accumulate(all(x), 0ll)
#define vecmin(x) *min_element(all(x))
#define vecmax(x) *max_element(all(x))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b / gcd(a, b))
#define fi first
#define se second
#define pb push_back
#define cn continue;
#define br break;
#define rn return;
#define in insert
#define pob pop_back
#define mp make_pair
#define sz size()
#define ceil2(x, y) ((x + y - 1) / (y))
#define nline cout << "\n"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define min(a, b) (a < b) ? a : b
#define max(a, b) (a > b) ? a : b
#define mini(a, b, c) (min(a, b) < c) ? min(a, b) : c
#define maxi(a, b, c) (max(a, b) > c) ? max(a, b) : c
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
            tree_order_statistics_node_update> ordered_set;


void fastio() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  cout.precision(10);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
}

lli nc2(lli n) {
  return n * (n - 1) / 2;
}

lli m = 998244353;
lli fact(lli n) {
  if (n == 0 or n == 1) {
    return 1;
  }
  return (fact(n - 1) * n % m) % m;
}

int bin_search(vector<lli> arr, int data, int si, int ei) {
  if (si > ei) return -1;
  int mid = si + (ei - si) / 2;
  if (arr[mid] == data) return mid;
  else if (arr[mid] > data) return bin_search(arr, data, si, mid - 1);
  return bin_search(arr, data, mid + 1, ei);
}

void ichigo() {
  
  lli n, q; cin>>n>>q;

  vi a(n);
  inp(a);

  lli sum = vecsum(a);

  map< lli, lli > mp;
 
  int flips =0, prev = 0;


  while(q--){

    int t; cin>>t;

    if(t == 1){ 

        int i , x;  cin>>i>>x;
        i--;

        if(flips == 0){

            sum += x- a[i];

            a[i] =x;

        }else{

            if(mp[i] == 0){

                sum += x- prev;
            }else{

                sum += x- mp[i];
            }

            mp[i]= x;

        }
    }else{


        int x;  cin>>x;

        mp.clear();

        prev = x;

        flips= 1;

        sum = n*x;

    }

    cout<<sum<<endl;
  }

  
  



}

signed main() {
  fastio();
//   int tc; cin >> tc;
  int gtc = 1;
//   while (tc--) {
    // cout << "Case #" << gtc << ": ";
    // bool ans = 0;
    ichigo();
    // gtc++;
//   }
}