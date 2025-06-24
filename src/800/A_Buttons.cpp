#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int a,b,c; cin >> a >> b >> c;
        if (a+(c+1)/2 > b+c/2)
            cout << "First\n";
        else
            cout << "Second\n";
    }
}