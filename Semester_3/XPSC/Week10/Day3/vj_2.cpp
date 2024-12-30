#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n>=0 && n!=1 && n!=2 && n!=5) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}