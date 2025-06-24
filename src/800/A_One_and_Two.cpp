#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            arr[i] = arr[i]==2;
        }
        for(int i=1; i<n; i++)
            arr[i] = arr[i]+arr[i-1];
        
        int res = -2;
        for(int i=0; i<n; i++) {
            if (arr[i] == arr.back()-arr[i]) {
                res = i;
                break;
            }
        }
        cout << res+1 << "\n";
    }
}