#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,l,r,temp,smallDigit,largeDigit,max,lucky,remainder;
    cin>>t;
    while(t--){
        max=-1;
        cin>>l>>r;
        for(int i = l; i<=r;i++){
            smallDigit = 9,largeDigit=0;
            temp=i;
            while(temp){
                remainder = temp%10;
                if(remainder>largeDigit) largeDigit = remainder;
                if(remainder<smallDigit) smallDigit = remainder;
                temp/=10;
            }
            if(largeDigit-smallDigit==9){lucky = i;break;}
            if(largeDigit-smallDigit>max){
                max = largeDigit-smallDigit;
                lucky = i;
            }
        }
        cout<<lucky<<"\n";
    }
    return 0;
}