#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int possible = true;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            if (i==0 && x != 1)
                possible = false;
        }
        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}