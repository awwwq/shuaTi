#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    unsigned long int A,B,C;
    int D;
    scanf("%lu %lu %d",&A,&B,&D);
    C=A+B;
    string s="";
    while (1){
        unsigned long t= C%D;
        if(t<=9){
            s=to_string(t)+s;
        }else{
            s = (char)(t-10+'A')+s;
        }
        C=C/D;
        if(C==0){ break;}
    }
    cout<<s;
    return 0;
}
