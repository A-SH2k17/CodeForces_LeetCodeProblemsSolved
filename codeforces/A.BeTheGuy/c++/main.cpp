#include <bits/stdc++.h>
using namespace std;
int main(){
    int levels,p,q;
    set<int> pass;
    cin>>levels;
    cin>>p;
    while(p--){
        int n;
        cin>>n;
        pass.insert(n);
    }
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        pass.insert(n);
    }
    if(pass.size() == levels)
        cout<<"I become the guy.\n";
    else
        cout<<"Oh, my keyboard!\n";
    return 0;
}