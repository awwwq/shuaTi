#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n,bia;
    int num[100];
    scanf("%d %d",&n,&bia);
    for(int i=0;i<n;i++){
        scanf("%d",&num[(i+bia)%n]);
    }
    printf("%d",num[0]);
    for(int i=1;i<n;i++){
        printf(" %d",num[i]);
    }

    return 0;
}
