#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
bool cmp(pii x,pii y){
    return x.second<y.second;
}
int main(){
    pii p[105];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        p[i].first=i+1;
        cin>>p[i].second;
    }
    sort(p,p+n,cmp);
    for(int i=0;i<n/2;i++){
        cout<<p[i].first<<" "<<p[n-i-1].first<<endl;
    }
}
