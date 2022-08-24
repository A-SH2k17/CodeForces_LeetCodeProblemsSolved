#include <bits/stdc++.h>
using namespace std;

int main(){
    string roman;
    int integer = 0;
    cin>>roman;
    int sz= roman.length();
    for(int i=0;i<sz;i++){
        switch(roman[i]){
            case 'I':
                integer+=1;
                break;
            case 'V':
                integer+=5;
                break;
            case 'X':
                integer+=10;
                break;
            case 'L':
                integer+=50;
                break;
            case 'C':
                integer+=100;
                break;
            case 'D':
                integer+=500;
                break;
            case 'M':
                integer+=1000;
                break;
            default:
                break;
        }

        if((roman[i]=='I' && roman[i+1]=='V') || (roman[i]=='I' && roman[i+1]=='X'))
            integer-=2;
        if((roman[i]=='X' && roman[i+1]=='L') || (roman[i]=='X' && roman[i+1]=='C'))
            integer-=20;
        if((roman[i]=='C' && roman[i+1]=='D') || (roman[i]=='C' && roman[i+1]=='M'))
            integer-=200; 
    }
    cout<<integer<<endl;
    return 0;
}