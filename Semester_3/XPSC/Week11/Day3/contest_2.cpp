#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        long long sum=0, crnt=1;
        for (int i=0; i<7; i++) {
            sum += crnt;
            crnt *= 2;
        }
        if(sum<=x) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}