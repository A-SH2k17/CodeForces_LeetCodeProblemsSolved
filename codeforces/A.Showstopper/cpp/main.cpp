#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++){
            if(a[i]>b[i])
                swap(a[i],b[i]);
        }
        if(a[n-1]==*max_element(a,a+n) && b[n-1]==*max_element(b,b+n))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}