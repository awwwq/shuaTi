#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;


int main() {
    int n;
    char ch;
    cin>>n>>ch;
    int le=0,ri=0;
    int i=1;
    while (ri<n){
        i+=2;
        le=ri;
        ri=le+2*i;
    }
    int kongge=0;
    while (kongge!=(i-3)/2+1){
        for(int j=0;j<kongge;j++){
            cout<<' ';
        }
        for(int j=0;j<i-2-kongge*2;j++){
            cout<<ch;
        }
        cout<<'\n';
        kongge++;
    }
    kongge-=2;
    while (kongge>=0){
        for(int j=0;j<kongge;j++){
            cout<<' ';
        }
        for(int j=0;j<i-2-kongge*2;j++){
            cout<<ch;
        }
        cout<<'\n';
        kongge--;
    }
    cout<<n-le-1;

    return 0;
}
