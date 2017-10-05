#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main(){
    char ch[100000][3];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ch[i];
    }
    int count=1;
    for(int i=0;i<n-1;i++){
        if(ch[i][0]!=ch[i+1][0]){
            count++;
        }
    }
    cout<<count<<endl;
}
