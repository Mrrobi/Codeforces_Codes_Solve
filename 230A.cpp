#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int s;
class dragon{
public:
    int x;
    int y;
    int check();
};
int dragon::check(){
    if(x<s){
        s+=y;
    }
    else
        return 0;
    return 1;
}
bool cmp(const dragon& left, const dragon& right){
    return left.x<right.x;
}
int main(){
    dragon win[10000];
    int n;
    cin>>s>>n;
    for(int i = 0;i<n;i++){
        cin>>win[i].x>>win[i].y;
    }
    sort(win,win+n,cmp);
    int k;
    for(int i =0;i<n;i++){
        k = win[i].check();
    }
    if(k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
