#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        ll x=0;
        for(int i=0; i<n; i++) {
            int a;
            cin >> a;
            x ^= a;
        }

        ll prdct=1;
        for (int i=0; i<n; i++) {
            int a;
            cin >> a;
            prdct = (prdct*(x^a))%(r-l+1);
        }

        if (l<= prdct && prdct<=r) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}