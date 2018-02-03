#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;


int main() {
    char s1[61],s2[61],s3[61],s4[61];
    char day[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    int d=0;
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);
    scanf("%s",s4);
    for(int i=0;i<min(strlen(s1),strlen(s2));i++) {
        if(d==0) {
            if (s1[i] == s2[i] && (s1[i]<='G' && s1[i] >='A')) {
                d++;
            }
        }
        if(d==2){
            if(s1[i] == s2[i] && ((s1[i] <= '9'  && s1[i] >= '0')||(s1[i]<='N'&&s1[i]>='A'))) d++;
        }
        if (d == 1) {
            printf("%s ", day[((int)s1[i] - 65)]);
            d++;
        }
        if (d == 3) {
            if (s1[i] >='0' && s1[i] <='9') {
                printf("%02d:", s1[i]-'0');
                break;
            }
            if (s1[i] >='A' && s1[i] <= 'N') {
                printf("%02d:", s1[i] - 55);
                break;
            }
        }
    }
    for(int i=0;i<min(strlen(s3),strlen(s4));i++){
        if(s3[i]==s4[i]&&((s3[i]>='A'&&s3[i]<='Z')||(s3[i]>='a'&&s3[i]<='z'))){
            printf("%02d",i);
            break;
        }
    }

    return 0;
}
