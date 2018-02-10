#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    string num;
    int freq[10]={0,0,0,0,0,0,0,0,0,0};
    cin>>num;
    int length=num.length();
    for(int i=0;i<length;i++){
        freq[num[i]-'0']++;
    }
    for(int i=0;i<10;i++){
        if(freq[i]!=0){
            printf("%d:%d\n",i,freq[i]);
        }
    }
    return 0;
}
