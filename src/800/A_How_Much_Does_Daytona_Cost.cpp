#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n, k; cin >> n >> k;
        bool kExist = false;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            kExist = kExist || (x == k);
        }
        if (kExist)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}