#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n, x;
        cin >> n >> x;
        int prev = 0;
        int maxDiff = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            maxDiff = max(maxDiff, x-prev);
            prev = x;
        }
        maxDiff = max(maxDiff, 2*(x-prev));
        cout << maxDiff << "\n";
    }
}