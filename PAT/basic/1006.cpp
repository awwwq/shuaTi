#include <iostream>
#include <string>
using namespace std;


int main() {
    int num;
    scanf("%d",&num);
    for(int i=0;i<num/100;i++){
        printf("B");
    }
    num = num%100;
    for(int i=0;i<num/10;i++){
        printf("S");
    }
    num = num%10;
    for(int i=0;i<num;i++){
        printf("%d",i+1);
    }
    return 0;
}
