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

        int x = n/7;
        if(n%7>=2) x++;
        cout << x << endl;
    } 

    return 0;
}
