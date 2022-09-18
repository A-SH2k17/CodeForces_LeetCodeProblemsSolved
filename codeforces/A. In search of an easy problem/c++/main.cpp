#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,input;
    cin>>n;
    while(n--){
        cin>>input;
        if(input==1){
            cout<<"hard\n";
            return;
        }
    }
    cout<<"easy\n";
}
int main(){
    solve();
    return 0;
}