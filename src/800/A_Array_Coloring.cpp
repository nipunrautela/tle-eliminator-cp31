#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int sum = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            sum += x;
        }
        if (sum & 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}