#include <bits/stdc++.h>
using namespace std;

int main(){
    string word,wordR;
    cin>>word>>wordR;
    reverse(wordR.begin(),wordR.end());
    if(wordR==word)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}