#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    vector<int> arr(a);

    for(int i=0; i<a; i++) cin >> arr[i];

    for(int i=0; i<a; i++) {
        if(arr[i]==b) continue;
        else cout << arr[i] << " ";
    } cout << endl;

    return 0;
}
