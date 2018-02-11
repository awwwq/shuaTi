#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int shu[10];
    int temp;
    for(int i=0;i<10;i++){
        scanf("%d",&shu[i]);
    }
    string s="";
    int fz=1;
    while(fz<10){
        if(shu[fz]!=0){
            s.push_back((fz+'0'));
            shu[fz]--;
            break;
        }
        fz++;
    }
    for(int i=0;i<shu[0];i++){
        s.push_back('0');
    }
    while (fz<10){
        for(int i=0;i<shu[fz];i++){
            s.push_back(fz+'0');
        }
        fz++;
    }
    cout<<s;

    return 0;
}
