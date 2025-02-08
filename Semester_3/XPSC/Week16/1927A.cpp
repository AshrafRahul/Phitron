#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int num1=0, num2=0;
        num1 = s.find('B');
        num2 = s.rfind('B');
        cout << num2-num1+1 << endl;
    }
 
    return 0;
}