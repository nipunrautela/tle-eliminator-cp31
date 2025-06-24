#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            mp[x]++;
        }
        if (mp.size() == 1) {
            cout << "Yes\n";
        }
        else if (mp.size() == 2 && abs(mp.begin()->second - (++mp.begin())->second) <= 1) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
}