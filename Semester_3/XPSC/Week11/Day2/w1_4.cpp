#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    string rslt = to_string(n);
    while(rslt.length() < 4) {
        rslt = "0"+rslt;
    } cout << rslt << '\n';

    return 0;
}