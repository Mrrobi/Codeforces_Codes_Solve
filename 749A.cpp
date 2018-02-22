#include<bits/stdc++.h>
#define m 100000
#define seta(arr,x) memset(arr,x,sizeof(arr))
#define rep(x,n) for(int i = x; i<n ; i++)
#define repD(x,n) for(int i = x; i<=n ; i++)
using namespace std;
bool pri[m];
int arr[m/2];
int j=0;
void seive(){
    seta(pri,true);
    repD(2,(sqrt(m))){
        if(pri[i]){
            for(int j=i*2;j<=m;j+=i){
                pri[j]=false;
            }
        }
    }
    repD(2,m){
        if(pri[i]){
            arr[j++]=i;
        }
    }
}
int main(){
    seive();
    int arrT[100000]={0};
    int n,k=0,ct=0,o=0;
    cin>>n;
    while(n>0){
        if((n-arr[k])<arr[k]&&n!=arr[k]){
            k++;
            n-=arr[k];
            arrT[o]=arr[k];
            o++;
        }
        else{
            //cout<<arr[k]<<" ";
            n-=arr[k];
            arrT[o]=arr[k];
            o++;
        }
        ct++;
    }
    cout<<ct<<endl;
    for(int i=0;i<o;i++){
        cout<<arrT[i]<<" ";
    }
    puts(" ");
}
