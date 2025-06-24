#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int _xor = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            _xor ^= x;
        }

        if (_xor == 0 || (n&1))
            cout << _xor << "\n";
        else
            cout << -1 << "\n";
    }
}