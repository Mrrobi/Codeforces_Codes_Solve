#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
#define max 1000005
struct laptop{
    int dam;
    int qul;
}d[max];

bool cmp(struct laptop x,struct laptop y){
    return x.qul>y.qul;
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d[i].dam>>d[i].qul;
    }
    sort(d,d+n,cmp);
    bool flag=false;
    for(int i = 0;i<n-1;i++){
        if(d[i].qul>d[i+1].qul){
            if(d[i].dam<d[i+1].dam){
                flag=true;
                break;
            }
        }
    }
    if(flag){
        puts("Happy Alex");
    }
    else{
        puts("Poor Alex");
    }
}