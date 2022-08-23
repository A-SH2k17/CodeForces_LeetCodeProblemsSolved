#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(true){
        bool arr[10]={0};
        bool found = true;
        n++;
        int test = n;
        while(test!=0){
            if(arr[test%10]){
                found = false;
                break;
            }
            arr[test%10]=true;
            test/=10;
        }
        if(found){
            break;
        }
    }
    cout<<n<<endl;
    return 0;
}