#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int cnt = 0;
        for(int i=1; i<=9; i++) {
            int num = i;
            while(num <= n) {
                cnt++;
                num *= 10;
            }
        }
        cout << cnt << "\n";
    }
}