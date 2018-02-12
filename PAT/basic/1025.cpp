#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

struct node{
    int address;
    int Data;
    int Next;
};

int main() {
    int first,n,k;
    scanf("%d %d %d",&first,&n,&k);
    if(first==-1){printf("-1\n");}
    vector<node> v1(100010),v2,v3;
    node no;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&no.address,&no.Data,&no.Next);
        v1[no.address]=no;
    }
    int next=first;
    while (next!=-1){
        v2.push_back(v1[next]);
        next=v1[next].Next;
    }
    int len = v2.size();
    for(int i=k;i<=len;i+=k){
        for(int j=i-1;j>=i-k;j--){
            v3.push_back(v2[j]);
        }
    }
    for(int j=(len/k)*k;j<len;j++){
        v3.push_back(v2[j]);
    }


    vector<node>::iterator iter;

    for(iter=v3.begin();iter!=v3.end()-1;iter++){
        printf("%05d %d %05d\n",iter->address,iter->Data,(iter+1)->address);
    }
    printf("%05d %d -1",v3[v3.size()-1].address,v3[v3.size()-1].Data);
    return 0;
}
