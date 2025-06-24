#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n, k;
        cin >> n >> k;
        bool sorted = true;
        int prev = -1;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            if (x < prev) sorted = false;
            prev = x;
        }
        if (k > 1 || sorted)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}