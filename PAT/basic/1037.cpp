#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

struct money{
    int Galleon;
    int Sickle;
    int Kunt;
};

int compute(money pay,money have){
    int payKunt=pay.Galleon*17*29+pay.Sickle*29+pay.Kunt;
    int haveKunt=have.Galleon*17*29+have.Sickle*29+have.Kunt;
    return haveKunt-payKunt;
}

int main() {
    money needpay,have;
    scanf("%d.%d.%d %d.%d.%d",&needpay.Galleon,&needpay.Sickle,&needpay.Kunt,&have.Galleon,&have.Sickle,&have.Kunt);
    int rest = compute(needpay,have);
    if(rest<0){
        printf("-");
    }
    rest=abs(rest);
    printf("%d.%d.%d",rest/(17*29),(rest%(17*29))/29,rest%29);
    return 0;
}
