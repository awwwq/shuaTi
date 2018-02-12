#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

char upper(char ch){
    if(ch>='a'&&ch<='z'){
        return ch-'a'+'A';
    } else return ch;
}

bool isin(string s,char ch){
    int length=s.length();
    for(int i=0;i<length;i++){
        if(upper(ch)==upper(s[i])){ return true;}
    }
    return false;
}

int main() {
    string s1,s2;
    cin>>s1;
    cin>>s2;
    string hadcheck;
    int s1len=s1.length();
    for(int i=0;i<s1len;i++){
        //if(s1[i]=='_'){ continue;}  空格键可能也是坏的，。
        if(isin(hadcheck,s1[i])){
            continue;
        } else if(!isin(s2,s1[i])){
            hadcheck.push_back(s1[i]);
            cout<<upper(s1[i]);
        }
    }


    return 0;
}
