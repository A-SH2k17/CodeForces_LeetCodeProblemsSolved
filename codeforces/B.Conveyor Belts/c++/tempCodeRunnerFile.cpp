#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,x1,y1,x2,y2,n;
    cin>>t;
    while(t--){
        cin>>n>>x1>>y1>>x2>>y2;
        int maxLevel = n/2 -1;
        x1 = n - x1;
        if(x1>maxLevel)
            x1 = n - 1 - x1;
        y1 = n - y1;
        int levelA = min(x1,y1);
        if(y1>maxLevel)
            y1 = n - 1 - y1;
        x2 = n - x2;
        if(x2>maxLevel)
            x2 = n - 1 - x2;
        y2 = n - y2;
        if(y2>maxLevel)
            y2 = n - 1 - y2;
        int levelB = min(x2,y2);
        cout<<abs(levelA-levelB)<<endl;   
    }
    return 0;
}