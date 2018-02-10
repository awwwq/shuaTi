#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

struct shitoujianzibu{
    char player1;
    char player2;
};

int max(int a[],int n){
    int temp = 0;
    for(int i=1;i<n;i++){
        if(a[i]>a[temp])
            temp=i;
    }
    return temp;
}

int main() {
    int n;
    int A[3]={0,0,0};
    int mostA[3]={0,0,0},mostB[3]={0,0,0};//B,C,J
    char s[3]={'B','C','J'};
    scanf("%d",&n);
    vector<shitoujianzibu>all;
    shitoujianzibu ju;
    for(int i=0;i<n;i++){
        scanf("%s %s",&ju.player1,&ju.player2);
        all.push_back(ju);
    }
    vector<shitoujianzibu>::iterator iter;
    for(iter=all.begin();iter!=all.end();iter++){
        if(iter->player1==iter->player2)
            A[1]++;
        else if(iter->player1=='C'&&iter->player2=='J') {
            A[0]++;
            mostA[1]++;
        }
        else if(iter->player1=='C'&&iter->player2=='B') {
            A[2]++;
            mostB[0]++;
        }
        else if(iter->player1=='J'&&iter->player2=='C') {
            A[2]++;
            mostB[1]++;
        }
        else if(iter->player1=='J'&&iter->player2=='B') {
            A[0]++;
            mostA[2]++;
        }
        else if(iter->player1=='B'&&iter->player2=='J') {
            A[2]++;
            mostB[2]++;
        }
        else if(iter->player1=='B'&&iter->player2=='C') {
            A[0]++;
            mostA[0]++;
        }
    }
    printf("%d %d %d\n",A[0],A[1],A[2]);
    printf("%d %d %d\n",A[2],A[1],A[0]);
    printf("%c %c",s[max(mostA,3)],s[max(mostB,3)]);

    return 0;
}
