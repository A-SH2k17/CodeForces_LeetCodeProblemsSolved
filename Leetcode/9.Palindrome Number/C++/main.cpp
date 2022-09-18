#include <bits/stdc++.h>
using namespace std;
//start of solution
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long reverse = 0,temp = x;
        while(temp){
            reverse += temp%10;
            reverse*=10;
            temp/=10;
        }
        reverse/=10;
        return reverse == x;
    }
};
//end of solution

int main(){
    Solution sol1, sol2;
    if(sol1.isPalindrome(12))
        cout<<"yes\n";
    else 
        cout<<"no\n";

    if(sol1.isPalindrome(121))
        cout<<"yes\n";
    else 
        cout<<"no\n";
    return 0;
}