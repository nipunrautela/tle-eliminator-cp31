#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int cnt = 0;
        int action = 0;
        bool threeInRow = false;
        for(int i=0; i<n; i++) {
            char c; cin >> c;
            if (c == '#') {
                if (cnt >= 3) 
                    threeInRow = true;
                cnt = 0;
            }
            else {
                cnt++;
                action++;
            }
        }
        if (cnt >= 3) 
        threeInRow = true;
        
        if (threeInRow)
            cout << 2 << "\n";
        else
            cout << action << "\n";
    }
}