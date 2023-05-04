#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,max=INT16_MIN,lucky=0;
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            string temp = to_string(i);
            sort(temp.begin(),temp.end());
            int x = temp[temp.size()-1] - temp[0];
            if(x>max){
                max = x;
                lucky = i;
            }
        }
        cout<<lucky<<endl;
    }
    return 0;
}