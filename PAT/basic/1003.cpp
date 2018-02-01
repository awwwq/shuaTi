#include <iostream>
#include <string>
using namespace std;

bool check(char s[]){
    int stage = 0;
    int sum_a[3]={0,0,0};
    for(int i=0;s[i];i++){
        if(s[i]!='P'&&s[i]!='A'&&s[i]!='T')
            return false;
        else if(s[i]=='P'){
            if(stage!=0) return false;
            stage = 1;
        } else if(s[i]=='T'){
            if(stage!=1) return false;
            stage = 2;
        } else if(s[i]=='A'){
            sum_a[stage]++;
        }
    }
    if(stage!=2 || sum_a[1]==0 || sum_a[2]!=sum_a[0]*sum_a[1])
        return false;
    return true;
}

int main() {
    int n;
    char s[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",s);
        if(check(s)){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }

    return 0;
}
