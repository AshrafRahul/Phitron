#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int a, b;
        cin >> a >> b;

        if(a-b>0) {
            int k=a-b;
            int count=0;
            for(int i=1; i<=k; i++) count-=pow(2, i);
            for(int i=1; i<=b; i++) count+=pow(2, a-i+1);
            cout << count << endl;
        }
        else if(a==b) {
            int count=0;
            for(int i=1; i<=a; i++) count+=pow(2, i);
            cout << count << endl;
        }
    }

    return 0;
}
