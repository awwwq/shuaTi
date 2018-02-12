#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int mi;
    int behind_e_plus=0;
    int behind_e_minus=0;
    double base;
    string s;
    string s2;
    cin>>s;
    int length=s.length();
    if(s[0]=='-'){s2.push_back(s[0]);}

    int e=0;
    for(int i=1;i<length;i++){
        if(e==1){
            behind_e_plus=behind_e_plus*10+s[i]-'0';
        }
        if(e==2){
            behind_e_minus=behind_e_minus*10+s[i]-'0';
        }
        if(s[i-1]=='E'&&s[i]=='+'){e=1;}
        if(s[i-1]=='E'&&s[i]=='-'){e=2;}
    }
    if(behind_e_minus!=0){
        for(int i=0;i<behind_e_minus;i++){
            s2.push_back('0');
            if(i==0){s2.push_back('.');}
        }
        for(int i=1;i<length;i++){
            if(s[i]=='E'){ break;}
            if(s[i]>='0'&&s[i]<='9'){
                s2.push_back(s[i]);
            }
        }
        cout<<s2;
    } else{
        int count;
        bool begin=false;
        for(int i=1;i<length;i++){
            if(s[i]=='E'){ break;}
            if(begin){count++;}
            if(s[i]=='.'){begin=true;}
        }
        if(count>behind_e_plus){
            for(int i=1;i<length;i++){
                if(s[i]=='E'){ break;}
                if(s[i]>='0'&&s[i]<='9'){
                    s2.push_back(s[i]);
                }
                if(i==behind_e_plus+2){
                    s2.push_back('.');
                }
            }
            cout<<s2;
        } else{
            for(int i=1;i<length;i++){
                if(s[i]=='E'){ break;}
                if(s[i]>='0'&&s[i]<='9'){
                    s2.push_back(s[i]);
                }
            }
            for(int i=0;i<behind_e_plus-count;i++){
                s2.push_back('0');
            }
            cout<<s2;
        }
    }

    return 0;
}
