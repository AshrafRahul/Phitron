#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int val = 0;
        for(int i=0; i<n; i++) {
            int sum=0;
            for(int j=i; j<n; j++) {
                sum+=a[j];
                if(sum%2==0) val = max(val, j-i+1);
            }
        }
        cout << val << endl;
    }

    return 0;
}
