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
            if (i && arr[i-1] != arr[i])
                diff = true;
        }
        if (!diff) {
            cout << "-1\n";
            continue;
        }

        sort(arr.begin(), arr.end());
        int eq = 0;
        while(arr[eq] == arr[0]) eq++;

        cout << eq << " " << n-eq << "\n";
        for(int i=0; i<eq; i++)
            cout << arr[i] << " ";
        cout << "\n";
        for(int i=eq; i<arr.size(); i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
}