#include <iostream>
#include <cmath>
using namespace std;


int main() {
    char s[20][20];
    int i=0;
    freopen("./in.txt","r",stdin);
    while(~scanf("%s",&s[i])){
        i++;
    }
    fclose(stdin);
    printf("%s",s[i-1]);
    for(int j=i-2;j>=0;j--){
        printf(" %s",s[j]);
    }

    return 0;
}
