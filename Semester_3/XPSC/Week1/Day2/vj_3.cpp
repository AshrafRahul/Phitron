#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if((a-1)>=b) cout << a+(a-1) << endl;
    else if((b-1)>=a) cout << b+(b-1) << endl;
    else cout << a+b << endl;

    return 0;
}
