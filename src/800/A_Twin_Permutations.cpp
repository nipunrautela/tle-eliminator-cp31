#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            cout << n-x+1 << " ";
        }
        cout << "\n";
    }
}