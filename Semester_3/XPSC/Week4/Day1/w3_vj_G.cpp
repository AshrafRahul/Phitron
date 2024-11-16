#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        string a, b;
        cin >> a >> b;

        int cntA=0, cntB=0;
        for(int i=0; i<a.size(); i++) if(a[i]=='X') cntA++;
        for(int i=0; i<b.size(); i++) if(b[i]=='X') cntB++;

        if(a[a.size()-1]==b[b.size()-1]) {
            if(a[a.size()-1]=='S') {
                if(cntA>cntB) cout << "<" << '\n';
                else if(cntA<cntB) cout << ">" << '\n';
                else if(cntA==cntB) cout << "=" << '\n';
            }
            else if(a[a.size()-1]=='L') {
                if(cntA<cntB) cout << "<" << '\n';
                else if(cntA>cntB) cout << ">" << '\n';
                else if(cntA==cntB) cout << "=" << '\n';
            }
            else cout << "=" << '\n';
        }
        else if(a[a.size()-1]=='L') {
            if(b[b.size()-1]=='M' || b[b.size()-1]=='S') cout << ">" << '\n';
        }
        else if(a[a.size()-1]=='M') {
            if(b[b.size()-1]=='L') cout << "<" << '\n';
            else if(b[b.size()-1]=='S') cout << ">" << '\n';
        }
        else if(a[a.size()-1]=='S') {
            if(b[b.size()-1]=='L' || b[b.size()-1]=='M') cout << "<" << '\n';
        } 
    }

    return 0;
}