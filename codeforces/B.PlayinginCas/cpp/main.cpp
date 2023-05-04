#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        long long sum =0;
        cin>>m>>n;
        long long arr[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
                cin>>arr[i][j];
        }
        vector<long long>x;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                x.push_back(arr[j][i]);
            sort(x.begin(),x.end());
            for(int g=0;g<x.size();g++){
                sum+= g*x[g] - x[g]*(m-g-1);
            }
            x.clear();
        }
        cout<<sum<<endl;
    }
    return 0;
}