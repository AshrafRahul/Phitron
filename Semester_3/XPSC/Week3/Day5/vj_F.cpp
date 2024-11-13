#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        unordered_set<int> us;
        int pLnth = 0;
        for (int i=n-1; i>=0; i--) {
            if (us.count(a[i])) {
                pLnth = i+1;
                break;
            }
            us.insert(a[i]);
        }

        cout << pLnth << endl;
    }

    return 0;
}
