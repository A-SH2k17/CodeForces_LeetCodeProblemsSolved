#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> horseshoes;
    for(int i=0;i<4;i++){
        int n;
        cin>>n;
        horseshoes.insert(n);
    }
    cout<<4-horseshoes.size();
    return 0;
}