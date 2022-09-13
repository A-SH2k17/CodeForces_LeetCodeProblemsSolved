/*
    explanation for the problem:
        given an array of numbers each position is the i and each number is the pi
        output an array that shows where each person i(the position of th second array) got his gift from
        in the first test case
        2 3 4 1

        person 1 gave to 2 so 2 took from 1
        person 2 gave to 3 so 3 took from 2
        person 3 gave to 4 so 4 took from 3
        person 4 gave to 1 so one took from 4

        new array

        4 1 2 3


*/
#include <bits/stdc++.h>

using namespace std;

int main(){
int n,input,*arr,i=0;
cin>>n;
int sz =n;
arr = new int[n];
while(n--){
    cin>>input;
    arr[input-1] = i+1;
    i++;
}
for(i=0;i<sz;i++)
    cout<<arr[i]<<" ";
cout<<endl;
return 0;
}