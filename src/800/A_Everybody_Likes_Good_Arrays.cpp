#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int prevPar = -1;
        int cntSame = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            if ((x&1) == prevPar)
                cntSame++;
            prevPar = (x&1);
        }
        cout << cntSame << "\n";
    }
}