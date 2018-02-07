#include <bits/stdc++.h>
using namespace std;
int main() {
    pair<string,int>p1;
    pair<string,int>p2;
    int n;
    cin>>n;
    bool flag=true;
    for(int i=0;i<n;i++){
        string in;
        cin>>in;
        if(flag){
            p1.first = in;
            p1.second++;
            flag=false;
        }
        else{
            if(in==p1.first){
                p1.second++;
            }
            else{
                p2.first=in;
                p2.second++;
            }
        }
    }
    string res = (p1.second>p2.second)?p1.first:p2.first;
    cout<<res<<endl;
}