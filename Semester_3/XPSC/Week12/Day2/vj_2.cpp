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

        vector<int> tms(n);
        for (int i=0; i<n; i++) cin >> tms[i];

        int rms = 0;
        for (int tmSz: tms) rms += (tmSz+1)/2;

        cout << rms << '\n';
    }

    return 0;
}