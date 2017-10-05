#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    int n,m;
    bool color = false;
    cin>>n>>m;
    for(int i = 0; i<n ; i++){
        for(int j = 0; j<m ;j++){
            cin>>ch;
            if(ch=='C'||ch=='M'||ch=='Y'){
                color=true;
            }
        }
    }
    if(color){
        cout<<"#Color"<<endl;
    }
    else{
        cout<<"#Black&White"<<endl;
    }
}
