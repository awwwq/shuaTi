#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

bool check(string s){
    int weigh[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    int sum=0;
    for(int i=0;i<17;i++){
        if(s[i]>='0'&&s[i]<='9'){
            sum=sum+(int)(s[i]-'0')*weigh[i];
        }
        else{ return false;}
    }
    int z=sum%11;
    if(M[z]==s[17]){ return true;}
    else{ return false;}
}

int main() {
    int n;
    cin>>n;
    vector<string> id;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(!check(s)){id.push_back(s);}
    }
    if(id.size()==0){cout<<"All passed";}
    else{
        for(int i=0;i<id.size();i++){
            cout<<id[i]<<'\n';
        }
    }


    return 0;
}
