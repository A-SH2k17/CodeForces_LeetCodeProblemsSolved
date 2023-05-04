#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    bool found = false;
    int n,k,test,ps,ng;
    cin>>n>>k;
    for (ps=n/2;ps<=n;ps++){
        ng = n-ps;
        if(ps>=2 && ng>=2){
            test  = ((ps-1)*(ps)/2) + ((ng-1)*(ng)/2);
            if(test==k){
                found = true;
                break;
            }
        }
        else if(ps>=2){
            test  = ((ps-1)*(ps)/2);
            if(test==k){
                found = true;
                break;
            }
        }
        else if(ng>=2){
            test  = ((ng-1)*(ng)/2);
            if(test==k){
                found = true;
                break;
            }
        }
        else{
            test = 0;
            if(test==k){
                found = true;
                break;
            }
        }
    }
    if(found){
        string arr;
        cout<<"YES\n";
        while(ps--)
            arr+="1 ";
        while(ng--)
            arr+="-1 ";
        arr.pop_back();
        cout<<arr<<endl;
    }
    else{
        cout<<"NO\n";
    }
}
return 0;
}