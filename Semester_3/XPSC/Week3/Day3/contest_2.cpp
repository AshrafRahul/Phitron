#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, x, y;
        cin >> n >> x >> y;

        int mErn = 0;
        for(int t2=0; t2<=n/2; t2++) {
            int remH = n-(t2*2);
            int t1 = remH;
            int curErn = (t2*y)+(t1*x);
            mErn = max(mErn, curErn);
        } cout << mErn << '\n';
    }

    return 0;
}
