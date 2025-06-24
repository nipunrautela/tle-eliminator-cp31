#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n, k, x; cin >> n >> k >> x;
        if (x != 1) {
            cout << "YES\n";
            cout << n << "\n";
            for(int i=0; i<n; i++) {
                cout << "1 ";
            }
            cout << "\n";
        }
        else {
            if (n == 1) {
                cout << "NO\n";
            }
            else {
                if (n & 1) {
                    if (k < 3) {
                        cout << "NO\n";
                        continue;
                    }
                    cout << "YES\n";
                    n -= 3;
                    cout << 1 + n/2 << "\n";
                    cout << 3 << " ";
                    while(n) {
                        cout << 2 << " ";
                        n -= 2;
                    }
                }
                else {
                    if (k < 2) {
                        cout << "NO\n";
                        continue;
                    }
                    cout << "YES\n";
                    cout << n/2 << "\n";
                    while(n) {
                        cout << 2 << " ";
                        n -= 2;
                    }
                }
                cout << "\n";
            }
        }
    }
}