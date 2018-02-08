#include <bits/stdc++.h>
using namespace std;

string mini(string x,string y){
    if(x.length()<=y.length())return x;
    else return y;
}
int main() {
    pair<string,string>s1[3005];
    string s2[3005];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>s1[i].first>>s1[i].second;
    }
    for(int i=0;i<n;i++){
        cin>>s2[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s2[i]==s1[j].first||s2[i]==s1[j].second){
                cout<<mini(s1[j].first,s1[j].second)<<" ";
            }
        }
    }
    puts("");
    return 0;
}
