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

        int valA = abs(a-1), valB = abs(b-c)+abs(c-1);

        if(valA<valB) cout << 1 << '\n';
        else if(valA>valB) cout << 2 << '\n';
        else cout << 3 << '\n';
    }

    return 0;
}