#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int curLen = 0;
        int maxLen = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            if (x == 0)
                curLen++;
            else
                curLen = 0;
            maxLen = max(maxLen, curLen);
        }

        cout << maxLen << "\n";
    }
}