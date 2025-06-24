#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        vector<int> arr(n);
        bool diff = false;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if (i>0 && arr[i-1] != arr[i])
                diff = true;
        }
        if (!diff) {
            cout << "NO\n";
            continue;
        }
        sort(arr.begin(), arr.end(), greater<int>());
        int j=n-1;
        for(int i=1; i<j; i++) {
            if (arr[i] == arr[i-1])
                swap(arr[i], arr[j--]);
        }
        cout << "YES\n";
        for(int x: arr)
            cout << x << " ";
        cout << "\n";
    }
}