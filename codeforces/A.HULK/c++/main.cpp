#include <bits/stdc++.h>
using namespace std;

int main(){
    /*int m;
    cin>>m;
    string out = "I hate";
    m--;
    for(int i=1;i<=m;i++){
        string word = " that I";
        if(i%2==0)
            out = out+word+" hate";
        else
            out = out+word+" love";
    }
    cout<<out+" it\n";*/
    //shorter way
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
        if(i%2==0)
            cout<<"I love ";
        else
            cout<<"I hate ";
        if(i!=m)
            cout<<"that ";
    }
    cout<<"it\n";
    return 0;
}