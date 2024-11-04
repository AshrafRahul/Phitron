#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int x = a*b;
        int y = c*24*60;

        if(x<=y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
