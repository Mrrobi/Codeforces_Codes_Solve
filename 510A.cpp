#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=m;j++){
            if(i%2==0){
                cout<<'#';
            }
            if(flag==0&&i%2!=0){
                if(j<m){
                cout<<'.';
                }
                else if(j==m){
                cout<<'#';
                }
            }
            else if(flag==1&&i%2!=0){
                if(j!=1){
                    cout<<'.';
                }
                if(j==1){
                cout<<'#';
                }
            }
        }
        if(flag==0&&i%2!=0){
            flag=1;
        }
        else if(flag==1&&i%2!=0){
            flag=0;
        }
        cout<<""<<endl;
    }
}
