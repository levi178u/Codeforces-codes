#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string can_equalize_scores(int a, int b, int c, int m) {
    vector<int> scores = {a, b, c};
    sort(scores.begin(), scores.end());
    a = scores[0];
    b = scores[1];
    c = scores[2];
    
    if (m >= 3) {
        return "YES";
    }
    if (m == 2) {
        if ((b - a <= 2) || (c - b <= 2)) {
            return "YES";
        }
        if ((a == b) || (b == c)) {
            return "YES";
        }
        return "NO";
    }
    if (m == 1) {
        if ((b - a == 1) || (c - b == 1)) {
            return "YES";
        }
        if ((a == b) || (b == c)) {
            return "YES";
        }
        return "NO";
    }
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, m;
        cin >> a >> b >> c >> m;
        cout << can_equalize_scores(a, b, c, m) << "\n";
    }
    return 0;
}
