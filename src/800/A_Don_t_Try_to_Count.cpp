#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n, m; cin >> n >> m;
        string x, s; cin >> x >> s;
        int cnt = 0;
        while(x.length() < 2*max(n, m)) {
            if (x.find(s) != string::npos)
                break;
            x += x;
            cnt++;
        }
        if (x.find(s) == string::npos)
            cout << -1 << "\n";
        else 
            cout << cnt << "\n";
    }
}