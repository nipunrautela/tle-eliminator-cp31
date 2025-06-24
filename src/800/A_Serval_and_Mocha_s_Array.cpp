#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int lowestGcd = INT_MAX;
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                lowestGcd = min(lowestGcd, __gcd(arr[i], arr[j]));
            }
        }  
        if (lowestGcd <= 2)
            cout << "Yes\n";
        else
            cout << "No\n";

    }
}