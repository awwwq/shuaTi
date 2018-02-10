#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    string A,Q;
    int B,R=0;
    cin>>A>>B;
    int length=A.length();
    int temp=A[0]-'0';
    if(temp>=B)
        Q.push_back(temp/B+'0');
    for(int i=1;i<length;i++){
        R=temp%B;
        temp = R*10+A[i]-'0';
        Q.push_back(temp/B+'0');
    }
    R=temp%B;
    if(length == 1 && A[0]-'0'<B)
        cout<<"0 "<<A[0]-'0';
    else
        cout<<Q<<" "<<R;
    return 0;
}
