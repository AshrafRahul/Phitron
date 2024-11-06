#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
 
    while(t--){
        int n, flag=0;
        cin >> n;
 
        string r1, r2;
        cin >> r1;
        cin >> r2;
    
        for(int i=0; i<n; i++){
            if((r1[i]=='R' && r2[i]!='R') || (r1[i]!='R' && r2[i]=='R')){
                flag=1;
                break;
            }
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
 
    return 0;
}