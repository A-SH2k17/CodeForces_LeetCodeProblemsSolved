//this problem mainly focuses on bit maniupulation
#include <bits/stdc++.h>
using namespace std;
int main(){
    /*
    Another way
    
    string a,b;
    cin>>a>>b;
    int sz = a.size();
    for(int i=0;i<sz;i++){
        cout<<(a[i]^b[i]);
    }
    cout<<endl;*/

    string a,b;
    cin>>a>>b;
    int sz=a.size();
    for(int i=0;i<sz;i++){
        if(a[i]==b[i])
            cout<<0;
        else
            cout<<1;
    }
    cout<<endl;
    return 0;
}