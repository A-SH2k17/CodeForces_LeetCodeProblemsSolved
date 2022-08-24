#include <bits/stdc++.h>
using namespace std;
map<char,int>roman_conversion;
void generate_map(){
    roman_conversion['I']=1;
    roman_conversion['V']=5;
    roman_conversion['X']=10;
    roman_conversion['L']=50;
    roman_conversion['C']=100;
    roman_conversion['D']=500;
    roman_conversion['M']=1000;
}
int main(){
    generate_map();
    string roman;
    int integer =0;
    cin>>roman;
    int sz = roman.length();
    for(int i=0;i<sz;){
        if(i == sz-1 || roman_conversion[roman[i]] >= roman_conversion[roman[i+1]]){
            integer+=roman_conversion[roman[i]];
            i++;
        }
        else{
            integer+= roman_conversion[roman[i+1]] - roman_conversion[roman[i]];
            i+=2;
        }
    }

    cout<<integer<<endl;
    return 0;
}