#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    long long sum=0;
    for(int i=0; i<n; i++) sum+=a[i];

    if(sum%2==0) cout << sum << '\n';
    else {
        for(int i=0; i<n; i++) {
            if(a[i]%2==1) {
                sum-=a[i];
                break;
            }
        } cout << sum << '\n';
    }

    return 0;
}