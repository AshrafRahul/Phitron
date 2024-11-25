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

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        long long ttl=0;

        for(int i=0; i<n; i++) {
            long long nrml = a[i]*x, mstr=y;
            ttl += min(nrml, mstr);
        } cout << ttl << '\n';
    }

    return 0;
}