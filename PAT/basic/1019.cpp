#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

bool cmp(int a,int b){
    return a<b;
}

bool isallone(int num[],int n){
    if(n==2){
        return num[0]==num[1];
    } else{
        return num[n-1]==num[n-2]&&isallone(num,n-1);
    }
}

int dark(int number){
    int num[4];
    int renumber;
    for(int i=0;i<4;i++){
        num[3-i]=number%10;
        number=number/10;
    }
    sort(num,num+4,cmp);
    number = num[0]*1000+num[1]*100+num[2]*10+num[3]; //up
    renumber = num[0]+num[1]*10+num[2]*100+num[3]*1000; //down
    printf("%04d - %04d = %04d\n",renumber,number,renumber-number);
    return renumber-number;
}

int main() {
    int number;
    scanf("%d",&number);
    int numcopy=number;
    int num[4];
    for(int i=0;i<4;i++){
        num[3-i]=numcopy%10;
        numcopy=numcopy/10;
    }
    if(isallone(num,4)){
        printf("%04d - %04d = 0000",number,number);
    } else{
        while (1) {
            number = dark(number);
            if (number == 6174) {
                break;
            }
        }
    }

    return 0;
}
