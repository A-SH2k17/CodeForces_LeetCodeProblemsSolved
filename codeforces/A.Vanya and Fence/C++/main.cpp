#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t,input,minimum=0;
    cin>>n>>t;
    while(n--){
        cin>>input;
        if(input>t)
            minimum+=2;
        else
            minimum+=1;
    }
    cout<<minimum<<endl;

    return 0;
}