#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

bool check(string broke,char s){
    for(int i=0;i<broke.length();i++){
        if(tolower(broke[i])==tolower(s)){ return false;}
        if(broke[i]=='+'&&(s>='A'&&s<='Z')){ return false;}
    }
    return true;
}

int main() {
    string sbroke;
    string s;
    string s2;
    getline(cin,sbroke);
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(check(sbroke,s[i])){
            s2.push_back(s[i]);
        }
    }
    cout<<s2;
    return 0;
}
