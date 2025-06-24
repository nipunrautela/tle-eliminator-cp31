#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (d < b || (d-b < c-a))
            cout << -1 << "\n";
        else {
            int up = d-b;
            int left = a-c + up;
            cout << up + left << "\n";
        }
    }
}