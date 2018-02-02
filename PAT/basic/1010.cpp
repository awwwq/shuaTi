#include <iostream>
#include <cmath>
using namespace std;

struct xiang{
    int coe;
    int exp;
};

void derivation(struct xiang *s){
    (*s).coe = (*s).exp*(*s).coe;
    if((*s).exp!=0) (*s).exp = (*s).exp-1;
}

int main() {
    struct xiang duo[1000];
    int i=0;
    freopen("./in.txt","r",stdin);
    while(~scanf("%d %d",&duo[i].coe,&duo[i].exp)){
        i++;
    }
    fclose(stdin);
    for(int j=0;j<i;j++){
        derivation(&duo[j]);
    }

    printf("%d %d",duo[0].coe,duo[0].exp);
    for(int j=1;j<i;j++){
        if(duo[j].coe==0) continue;
        printf(" %d %d",duo[j].coe,duo[j].exp);
    }

    return 0;
}
