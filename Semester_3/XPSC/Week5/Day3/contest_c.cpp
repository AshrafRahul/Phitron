#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        long long val=LLONG_MAX;
        bool chk=false;
        for(int i=0; i<n; i++) {
            if(a[i]>=k) {
                chk=true;
                val=min(val, (a[i]%k));
            }
        }
        if(chk) cout << val << '\n';
        else cout << -1 << '\n';
    }

    return 0;
}