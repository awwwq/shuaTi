#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

struct participant{
    int id;
    int score;
};

bool cmp(participant a,participant b){
    return a.id<b.id;
}

bool cmpscore(participant a,participant b){
    return a.score>b.score;
}

int main() {
    int n;
    cin>>n;
    if(n==0){
        return 0;
    }
    vector<participant> partici;
    vector<participant> particicombine;
    participant par;
    for(int i=0;i<n;i++){
        cin>>par.id>>par.score;
        partici.push_back(par);
    }
    sort(partici.begin(),partici.end(),cmp);
    par.id=partici[0].id;
    par.score=0;
    for(int i=0;i<partici.size();i++){
        if(partici[i].id==par.id){
            par.score=par.score+partici[i].score;
            if(i==partici.size()-1){particicombine.push_back(par);}
        }
        else{
            particicombine.push_back(par);
            i--;
            par.id+=1;
            par.score=0;
        }
    }
    sort(particicombine.begin(),particicombine.end(),cmpscore);
    cout<<particicombine[0].id<<" "<<particicombine[0].score;
    return 0;
}
