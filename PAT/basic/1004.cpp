#include <iostream>
#include <string>
using namespace std;

int main() {
    char name[100][11];
    char id[100][11];
    int grade[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %s %d",&name[i],&id[i],&grade[i]);
    }
    int max=0,min=100;
    int maxindex=0,minindex=0;
    for(int i=0;i<n;i++){
        if(grade[i]>max){
            max = grade[i];
            maxindex=i;
        }
        if(grade[i]<min){
            min = grade[i];
            minindex=i;
        }
    }
    printf("%s %s\n%s %s\n",name[maxindex],id[maxindex],name[minindex],id[minindex]);
    return 0;
}
