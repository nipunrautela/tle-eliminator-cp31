#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int minVal = INT_MAX;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        minVal = min(minVal, abs(x));
    }
    cout << minVal << "\n";
}