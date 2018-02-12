#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;


int main() {
    int C1,C2;
    int h,m,s;
    double second;
    scanf("%d %d",&C1,&C2);
    second = round((C2-C1)*1.0/100);
    h=(int)second/3600;
    second=(int)second%3600;
    m=(int)second/60;
    second=(int)second%60;
    s=second;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}
