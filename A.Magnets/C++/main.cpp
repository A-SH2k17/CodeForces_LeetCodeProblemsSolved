#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,groups=1;
    cin>>n;
    string input;
    cin>>input;
    string previous = input;
    n--;
    while(n--){
        cin>>input;
        if(input != previous){
            groups++;
        }
        previous = input;
    }

    cout<<groups<<endl;
    return 0;
}