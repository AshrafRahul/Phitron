#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        sort(s.begin(), s.end());
        if(s.size()!=5) cout << "NO" << endl;
        else if(s=="Timru") cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
