#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; 
    cin >> n >> m;

    string s; 
    cin >> s;

    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; i++) {
        cin >> vp[i].first >> vp[i].second;
    }

    set<pair<int, int>> vis;
    int curr = 0;

    for (auto &cm : s) {
        int dx = 0, dy = 0;

        if (cm == 'A') {
            dx = 1; dy = 1;
        } else if (cm == 'B') {
            dx = 1; dy = -1;
        } else if (cm == 'C') {
            dx = -1; dy = 1;
        } else if (cm == 'D') {
            dx = -1; dy = -1;
        } else {
            continue; 
        }

        while (1) {
            int nx = vp[curr].first + dx;
            int ny = vp[curr].second + dy;

            
            if (vis.count({nx, ny}) || nx < 0 || ny < 0) {
                break; }
            vis.insert({nx, ny});

            
            auto it = find(vp.begin(), vp.end(), make_pair(nx, ny));
            if (it != vp.end()) {
                curr = it - vp.begin(); 
            } else {
                break; 
            }
        }
    }

    cout << vp[curr].first +2 << " " << vp[curr].second -2 << endl;
    return 0;
}
