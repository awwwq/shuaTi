#include <iostream>
#include <cmath>
using namespace std;

void  check(int num[],int n){
    int A1=0,A2=0,A3=0,A5=0;
    double A4=0;
    bool A2Tag=0;
    int plus=0;int count4=0;
    for(int i=0;i<n;i++){
        if(num[i]%5==0 && num[i]%2==0){
            A1+=num[i];
        }
        if(num[i]%5==1){
            A2+=pow(-1,plus)*num[i];
            plus+=1;
            A2Tag=1;
        }
        if(num[i]%5==2){
            A3++;
        }
        if(num[i]%5==3){
            A4+=num[i];
            count4++;
        }
        if(num[i]%5==4){
            if(num[i]>A5) A5=num[i];
        }
    }
    if(A1==0) printf("N");
    else printf("%d",A1);
    if(A2Tag==0) printf(" N"); //有可能存在余1的数但其和为0
    else printf(" %d",A2);
    if(A3==0) printf(" N");
    else printf(" %d",A3);
    if(A4==0) printf(" N");
    else printf(" %.1f",A4/count4);
    if(A5==0) printf(" N");
    else printf(" %d",A5);
}


int main() {
    int n;
    int num[1000];
    freopen("./in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    fclose(stdin);
    check(num,n);

    return 0;
}
