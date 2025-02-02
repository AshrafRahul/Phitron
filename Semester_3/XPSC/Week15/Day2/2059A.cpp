#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        
        for(int x: a) cin >> x;
        for(int x: b) cin >> x;
        
        sort(a.begin(), a.end());
        set<int> s;
        for(int i=0; i<n; i++) s.insert(a[i] + b[i]);
        
        if(s.size()>=3) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
