#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        int cnt1=0, cnt_1=0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            cnt1 += x==1;
            cnt_1 += x==-1;
        }
        // cout << cnt1 << " " << cnt_1 << " ";
        int res = 0;
        if (cnt_1 > cnt1) {
            res += (cnt_1-cnt1+1)/2;
            cnt1 += res;
            cnt_1 -= res;
        }
        if (cnt_1 & 1)
            res++;
        cout << res << "\n";
    }
}