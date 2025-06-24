#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n, a, b; cin >> n >> a >> b;
        if (a+b+2 <= n || (a==n && b==n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}