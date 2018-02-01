#include <iostream>
#include <string>
using namespace std;

void topinyin(int n){
    char pinyin[10][20] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    if(n/10!=0){
        topinyin(n/10);
        printf(" %s",pinyin[n%10]);
    } else{
        printf("%s",pinyin[n]);
    }
}

int main() {
    int n=0,d;
    freopen("./in.txt","r",stdin);   //提交时删掉
    while(~scanf("%1d",&d)){    //直接输入会卡在while，反复要求输入，用freopen从文件读取解决
        n = n+d;
    }
    fclose(stdin);
    topinyin(n);
    return 0;
}
