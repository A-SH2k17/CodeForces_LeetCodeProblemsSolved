#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    float result=0,input;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>input;
        result+= input/100;
    }
    cout<< result/float(n)*100;
    return 0;
}