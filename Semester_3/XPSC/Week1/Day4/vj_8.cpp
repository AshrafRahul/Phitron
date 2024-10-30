#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> a(n);
    ll sum=0, mOdd=LLONG_MAX;

    for(int i=0; i<n; i++) {
        cin >> a[i];
        sum+=a[i];
        if(a[i]%2!=0) mOdd = min(mOdd, a[i]);
    }
    
    if(sum%2==0) cout << sum << endl;
    else cout << sum-mOdd << endl;

    return 0;
}
