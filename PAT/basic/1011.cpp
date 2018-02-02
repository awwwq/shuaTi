#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long int a,b,c;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%ld %ld %ld",&a,&b,&c);
        printf("Case #%d: %s\n",i+1,(a+b>c?"true":"false"));
    }
    return 0;
}
