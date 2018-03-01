#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;


int main() {
    int n;
    char s;
    cin>>n>>s;
    for(int i=0;i<round(n*1.0/2)-1;i++){
        if(i==0){
            for(int j=0;j<n;j++) cout<<s;
            cout<<endl;
        } else{
            cout<<s;
            for(int j=1;j<n-1;j++) cout<<' ';
            cout<<s<<endl;
        }
    }
    for(int j=0;j<n;j++) cout<<s;
    return 0;
}
