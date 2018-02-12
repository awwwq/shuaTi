#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>

using namespace std;

struct person{
    char name[10];
    int year;
    int month;
    int day;
};

bool cmp(person s1,person s2){
    if(s1.year!=s2.year){
        return s1.year>s2.year;
    } else if(s1.month!=s2.month){
        return s1.month>s2.month;
    } else {
        return s1.day>s2.day;
    }
}

int main() {
    vector<person> all;
    person one;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%s %d/%d/%d", one.name, &one.year, &one.month, &one.day);
        if(one.year==2014&&one.month<9){
            all.push_back(one);
        } else if(one.year==2014&&one.month==9&&one.day<=6){
            all.push_back(one);
        } else if(one.year<2014&&one.year>1814){
            all.push_back(one);
        } else if(one.year==1814&&one.month>9){
            all.push_back(one);
        } else if(one.year==1814&&one.month==9&&one.day>=6){
            all.push_back(one);
        }

    }
    if(all.size()==0){printf("0");}
    else {
        sort(all.begin(), all.end(), cmp);
        printf("%d %s %s", all.size(), (all.end() - 1)->name, all.begin()->name);
    }


    return 0;
}
