#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        long long k;
        cin >> k;
        if (k%3==1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}