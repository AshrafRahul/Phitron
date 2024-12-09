#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int h, x, y;
        cin >> h >> x >> y;

        int nrmlAtk=(h-y+x-1)/x, ttl=nrmlAtk+1;

        cout << ttl << '\n';
    }

    return 0;
}