//inefficient way in case of no datastructure allowed
#include <bits/stdc++.h>
using namespace std;
int main(){
    int shoes_must_buy=0;
    int arr[4];
    for(int i=0;i<4;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    for(int i=0;i<3;){
        for(int j=i+1;j<4;j++){
            if(arr[i]==arr[j] && shoes_must_buy!=4)
                shoes_must_buy++;
        }
        if(shoes_must_buy!=0)
            i+=shoes_must_buy;
        else
            i++;
    }
    cout<<shoes_must_buy<<endl;
    return 0;
}