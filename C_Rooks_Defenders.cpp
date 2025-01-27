#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define in insert
#define vi vector<lli>
#define mod 1e9 + 7
#define inf 1e9 + 1

void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    cout.precision(10);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
}

int bin_search(const vector<lli>& arr, int data, int si, int ei) {
    if (si > ei) return -1;
    int mid = si + (ei - si) / 2;
    if (arr[mid] == data) return mid;
    else if (arr[mid] > data) return bin_search(arr, data, si, mid - 1);
    return bin_search(arr, data, mid + 1, ei);
}

void ichigo() {
    lli n, q;
    cin >> n >> q;

    set<lli> sx, sy;

    for (lli i = 0; i < n; i++) {
        sx.in(i);
        sy.in(i);
    }

    map<lli, lli> mpx, mpy;

    while (q--) {
        lli t;
        cin >> t;

        if (t == 1) {
            lli x, y;
            cin >> x >> y;
            x--; y--;

            mpx[x]++;
            mpy[y]++;

            sx.erase(x);
            sy.erase(y);

        } else if (t == 2) {
            lli x, y;
            cin >> x >> y;
            x--; y--;

            mpx[x]--;
            mpy[y]--;

            if (mpx[x] == 0) sx.in(x);
            if (mpy[y] == 0) sy.in(y);

        } else {
            lli x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            x1--; y1--; x2--; y2--;

            auto xc = sx.lower_bound(min(x1, x2));
            auto yc = sy.lower_bound(min(y1, y2));

            // cout << *xc << " " << *yc << " ";

            if (*xc > max(x1, x2) || *yc > max(y1, y2)) {
                cout<<"YES"<<endl;
            } else {
               cout<<"NO"<<endl;
            }
        }
    }
}

signed main() {
    fastio();
    ichigo();
    return 0;
}
