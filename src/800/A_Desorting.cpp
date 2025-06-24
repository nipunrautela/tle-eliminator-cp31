#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int minDiff = INT_MAX;
        int prev; cin >> prev;
        bool isSorted = true;
        for(int i=0; i<n-1; i++) {
            int x; cin >> x;
            if (prev > x)
                isSorted = false;
            minDiff = min(minDiff, x-prev);
            prev = x;
        }

        if (!isSorted) {
            cout << "0\n";
        }
        else {
            cout << (minDiff/2)+1 << "\n";
        }
    }
}