#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        long long n, k; cin >> n >> k;
        if (n%2 == 0) {
            cout << "YES\n";
        }
        else {
            if (n-k >= 0 && (n-k)%2 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}