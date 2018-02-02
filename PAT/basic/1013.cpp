#include <iostream>
#include <cmath>
using namespace std;

int nextprime(int n){
    int num=n+1;
    while(1) {
        int s=sqrt(num);
        int i;
        for (i = 2; i <= s;i++){
            if(num%i==0) break;
        }
        if(i>s) break;
        else num++;
    }
    return num;
}

int n1prime(int n){
    int first = 2;
    for(int i=1;i<n;i++){
        first = nextprime(first);
    }
    return first;
}

int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int count=n1;
    for(int i=0;i<(n2-n1+1)/10+1;i++){
        int target=0;
        printf("%d",n1prime(count));
        if(count>=n2) break;
        count++;
        for(int j=1;j<10;j++){
            printf(" %d",n1prime(count));
            if(count==n2) {
                target = 1;
                break;
            }
            count++;
        }
        if(target) break;
        printf("\n");
    }

    return 0;
}
