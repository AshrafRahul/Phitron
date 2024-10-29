#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool alp[26] = {false};
    for(char c: s) alp[c-'a'] = true;

    for(int i=0; i<26; i++) {
        if(!alp[i]) {
            cout << char('a'+i) << endl;
            return 0;
        }
    } cout << "None" << endl;

    return 0;
}
