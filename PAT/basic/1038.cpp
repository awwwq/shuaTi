#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;


int main() {
    int n;
    cin>>n;
    int score[101] = {0};
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp>=0&&temp<=100){
            score[temp]++;
        }
    }
    int searchN;
    cin>>searchN;
    for(int i=0;i<searchN;i++){
        int temp;
        cin>>temp;
        if(i==0){
            cout<<score[temp];
        } else{
            cout<<" "<<score[temp];
        }
    }
    return 0;
}
