#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;

    int max_coins = max({2 * a - 1, 2 * b - 1, a + b});
    cout << max_coins << '\n';

    return 0;
}