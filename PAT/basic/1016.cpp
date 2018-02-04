#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

int compute(char A[],int n){
    int beishu=0;
    int sum=0;
    for(int i=0;i<strlen(A);i++){
        if(A[i]=='0'+n){
            sum = sum+pow(10,beishu)*n;
            beishu++;
        }
    }
    return sum;
}

int main() {
    int da,db;
    char A[100],B[100];
    scanf("%s %d %s %d",A,&da,B,&db);
    printf("%d",compute(A,da)+compute(B,db));
    return 0;
}
