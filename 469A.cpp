#include<bits/stdc++.h>


using namespace std;
int main(){
    int n,arr1[1000],arr2[1000],x,y,flag[1000]={0};
    cin>>n;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>arr1[i];
        flag[arr1[i]]=1;
    }
        
    cin>>y;
    for(int i=0;i<y;i++){
        cin>>arr2[i];
        flag[arr2[i]]=1;
    }
    int f=1;
    for(int i=1;i<=n;i++){
        if(flag[i]==0){
            f=0;
            break;
        }
    }
    if(f)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
}
