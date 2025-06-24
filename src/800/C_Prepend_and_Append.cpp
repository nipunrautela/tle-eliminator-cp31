#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        string s;
        cin >> s;
        int i=0, j=n-1;
        while(i<j && s[i] != s[j])
            i++, j--;
        cout << j-i+1 << "\n";
    }
}