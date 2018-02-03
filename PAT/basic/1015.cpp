#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

struct grade{
    char id[10];
    int de;
    int cai;
};

bool Cmpare(const grade &a, const grade &b){
    if((a.de+a.cai)!=(b.de+b.cai)){
        return a.de+a.cai>b.de+b.cai;
    } else{
        if(a.de!=b.de){
            return a.de>b.de;
        }else{
            return strcmp(a.id,b.id)<0;
        }
    }
}

int main() {
    int n,a,b;
    int count=0;
    vector<grade>v1,v2,v3,v4;
    grade grades;
    scanf("%d %d %d",&n,&a,&b);
    for(int i=0;i<n;i++){
        scanf("%s %d %d",grades.id,&grades.de,&grades.cai);
        if(grades.de>=a&&grades.cai>=a){
            count++;
            if(grades.de>=b&&grades.cai>=b){
                v1.push_back(grades);
            } else if(grades.de>=b&&grades.cai<b){
                v2.push_back(grades);
            }else if(grades.de<b&&grades.cai<b&&grades.de>=grades.cai){
                v3.push_back(grades);
            }else
                v4.push_back(grades);
        }
    }
    sort(v1.begin(),v1.end(),Cmpare);
    sort(v2.begin(),v2.end(),Cmpare);
    sort(v3.begin(),v3.end(),Cmpare);
    sort(v4.begin(),v4.end(),Cmpare);

    printf("%d\n",count);
    vector<grade>::iterator iter;
    for(iter=v1.begin();iter!=v1.end();iter++)
        printf("%s %d %d\n",iter->id,iter->de,iter->cai);

    for(iter=v2.begin();iter!=v2.end();iter++)
        printf("%s %d %d\n",iter->id,iter->de,iter->cai);

    for(iter=v3.begin();iter!=v3.end();iter++)
        printf("%s %d %d\n",iter->id,iter->de,iter->cai);

    for(iter=v4.begin();iter!=v4.end();iter++)
        printf("%s %d %d\n",iter->id,iter->de,iter->cai);

    return 0;
}
