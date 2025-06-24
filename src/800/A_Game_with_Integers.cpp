#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int x; cin >> x;
        if (x % 3 == 0)
            cout << "Second\n";
        else
            cout << "First\n";
    }
}