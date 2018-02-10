#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

struct kind{
    double amount;
    double price;
};

bool cmp(kind a, kind b){
    return a.price/a.amount>b.price/b.amount;
}

int main() {
    int n,sum;
    double value=0;
    scanf("%d %d",&n,&sum);
    vector<kind> v1;
    kind temp;
    for(int i=0;i<n;i++){
        scanf("%lf",&temp.amount);
        v1.push_back(temp);
    }
    vector<kind>::iterator iter;
    for(iter=v1.begin();iter!=v1.end();iter++){
        scanf("%lf",&iter->price);
    }
    sort(v1.begin(),v1.end(),cmp);
    double num=0;
    for(iter=v1.begin();iter!=v1.end();iter++){
        num = num+iter->amount;
        if(num>sum){
            value=value+(iter->price/iter->amount)*(iter->amount-num+sum);
            break;
        } else{
            value = value+iter->price;
        }
    }
    printf("%.2lf",value);

    return 0;
}
