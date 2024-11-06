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

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        for(int i=0; i<n; i++) {
            int k;
            string s;
            cin >> k >> s;
            for(int j=0; j<k; j++) {
                if(s[j]=='D') a[i]=(a[i]+1)%10;
                else if(s[j]=='U') a[i]=(a[i]-1+10)%10;
            }
        }

        for(int i=0; i<n; i++) cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}
