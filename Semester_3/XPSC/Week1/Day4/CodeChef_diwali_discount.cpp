#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;

    if(a<b) cout << 0 << endl;
    else cout << a-b << endl;

    return 0;
}
