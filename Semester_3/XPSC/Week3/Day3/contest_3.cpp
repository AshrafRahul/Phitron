#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, k, l;
        cin >> n >> k >> l;

        vector<int> lnt;
        for(int i=0; i<n; i++) {
            int mi, li;
            cin >> mi >> li;

            if(li==l) lnt.push_back(mi);
        }
        if(lnt.size()< k) cout << -1 << endl;
        else {
            sort(lnt.begin(), lnt.end(), greater<int>());
            int mlnt= 0;
            for(int i=0; i<k; i++) mlnt+=lnt[i];
            cout << mlnt << endl;
        }
    }

    return 0;
}
