#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n;
    int pre,aft=2;
    int count=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int m=sqrt(i);
        int j;
        for(j=2;j<=m;j++){
            if(i%j==0) break;
        }
        if(j>m) {
            pre = aft;
            aft = i;
            if (aft - pre == 2) {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
